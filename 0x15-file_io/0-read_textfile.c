#include "main.h"
#include <stdio.h>

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
