/*
* Create a function that creates a file.
* Prototype: int create_file(const char *filename, char *text_content);
* where filename is the name of the file to create and text_content is a NULL
* terminated string to write to the file
* Returns: 1 on success, -1 on failure (file can not be created, file can not
* be written, write “fails”, etc…)
* The created file must have those permissions: rw-------. If the file already
* exists, do not change the permissions.
* if the file already exists, truncate it
* if filename is NULL return -1
* if text_content is NULL create an empty file
*/

#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a string to write to the file.
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int bytes = 0, fd, w;

	if (text_content)
	{
		while (text_content[bytes])
			bytes++;
	}

	fd = open(filename, O_CREAT | O_TRUNC | O_RDWR, 0600);
	w = write(fd, text_content, bytes);

	if (fd == -1 || w == -1)
		return (-1);
	close(fd);
	return (1);
}
