/*
* Write a function that reads a text file and prints it to the POSIX standard
* output.
* Prototype: ssize_t read_textfile(const char *filename, size_t letters);
* where letters is the number of letters it should read and print
* returns the actual number of letters it could read and print
* if the file can not be opened or read, return 0
* if filename is NULL return 0
* if write fails or does not write the expected amount of bytes, return 0
*/
#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters the
 *           function should read and print.
 *
 * Return: If the function fails or filename is NULL - 0.
 *         O/w - the actual number of bytes the function can read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t printed, red, fd = open(filename, O_RDONLY);
	char *buffer = malloc(sizeof(char) * letters);

	if (!buffer)
		return (0);
	red = read(fd, buffer, letters);
	printed = write(STDOUT_FILENO, buffer, red);
	if (fd == -1 || red == -1 || printed == -1 || printed != red)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(fd);
	return (printed);
}
