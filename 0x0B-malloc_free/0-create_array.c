#include "holberton.h"

/**
 * create_array - function
 * @size: size of array
 * @c: char to fill the array
 * Return: pointer
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	arr = malloc(size * sizeof(c));

	if (size == 0 || !arr)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
