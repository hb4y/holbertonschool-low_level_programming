#include "holberton.h"

/**
 * read_textfile - function
 * @filename: text file
 * @letters: numbber of letters to read and print
 * Return: actual number of letters it could print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	char *buffer;
	ssize_t n;

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);

	if (file == -1)
		return (0);

	buffer = malloc(letters);

	if (buffer == NULL)
		return (0);

	n = read(file, buffer, letters);

	if (n == -1)
	{
		free(buffer);
		close(file);
		return (-1);
	}

	n = write(STDOUT_FILENO, buffer, n);

	if (n == -1)
	{
		free(buffer);
		close(file);
		return (-1);
	}

	free(buffer);
	close(file);
	return (n);

	return (letters);
}
