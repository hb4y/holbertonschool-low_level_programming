#include "holberton.h"

/**
 * create_file - function
 * @filename: text file
 * @text_content: content of the file to create
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file, n, len;

	if (filename == NULL)
		return (0);

	file = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);

	if (file == -1)
		return (-1);

	if (text_content == NULL)
		return (1);

	for (len = 0; text_content[len] != '\0'; len++)
		;

	n = write(file, text_content, len);

	if (n == -1)
	{
		close(file);
		return (-1);
	}

	close(file);
	return (1);
}
