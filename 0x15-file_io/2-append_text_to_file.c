#include "holberton.h"

/**
 * append_text_to_file - function
 * @filename: text file
 * @text_content: content to append to the file
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, n, len;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);

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
