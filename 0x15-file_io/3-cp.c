/*
* Write a program that copies the content of a file to another file.
* Usage: cp file_from file_to
* if the number of argument is not the correct one, exit with code 97 and
* print Usage: cp file_from file_to, followed by a new line, on the POSIX
* standard error
* if file_to already exists, truncate it
* if file_from does not exist, or if you can not read it, exit with code 98
* and print Error: Can't read from file NAME_OF_THE_FILE, followed by a
* new line, on the POSIX standard error
* where NAME_OF_THE_FILE is the first argument passed to your program
* if you can not create or if write to file_to fails, exit with code 99 and
* print Error: Can't write to NAME_OF_THE_FILE, followed by a new line, on
* the POSIX standard error
* where NAME_OF_THE_FILE is the second argument passed to your program
* if you can not close a file descriptor , exit with code 100 and print Error:
* Can't close fd FD_VALUE, followed by a new line, on the POSIX standard error
* where FD_VALUE is the value of the file descriptor
* Permissions of the created file: rw-rw-r--. If the file already exists, do
* not change the permissions
* You must read 1,024 bytes at a time from the file_from to make less system
* calls. Use a buffer
* You are allowed to use dprintf
*/
#include "main.h"
#include <stdio.h>
#include <sys/stat.h>

/**
 * copy_file - copies a file's contents into another file
 * @src: source file
 * @dest: destination file
 */
void copy_file(const char *src, const char *dest)
{
	mode_t old_umask = umask(0);
	int sfd = open(src, O_RDONLY);
	int dfd = open(dest, O_TRUNC | O_WRONLY | O_CREAT | O_APPEND, 0664);
	int w, r;
	char buffer[1024];

	umask(old_umask);
	while ((r = read(sfd, buffer, 1024)) > 0)
	{
		w = write(dfd, buffer, r);
	}
	if (r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s", src);
		exit(98);
	}
	if (w == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s", dest);
		exit(99);
	}

	if (close(sfd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", sfd);
		exit(100);
	}
	if (close(dfd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", dfd);
		exit(100);
	}
}

/**
 * main - calls the copy function
 * @argc: no. of arguments in terminal plus executable
 * @argv: array of pointers to arguments in terminal plus executable
 * Return: always returns 0
*/
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp %s %s\n", argv[1], argv[2]);
		exit(97);
	}
	copy_file(argv[1], argv[2]);
	return (0);
}
