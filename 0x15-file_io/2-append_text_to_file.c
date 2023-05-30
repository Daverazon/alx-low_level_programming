/*
* Write a function that appends text at the end of a file.
* Prototype: int append_text_to_file(const char *filename, char *text_content)
* where filename is the name of the file and text_content is the NULL
* terminated string to add at the end of the file
* Return: 1 on success and -1 on failure
* Do not create the file if it does not exist
* If filename is NULL return -1
* If text_content is NULL, do not add anything to the file. Return 1 if thefile
* exists and -1 if the file does not exist or if you do not have the required
* permissions to write the file
*/
#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 *
 * Return: If the function fails or filename is NULL - -1.
 *         If the file does not exist the user lacks write permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int bytes = 0, fd, w;

	if (text_content)
	{
		while (text_content[bytes])
			bytes++;
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	w = write(fd, text_content, bytes);
	if (w == -1)
	{
		if (fd > 2)
			close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
