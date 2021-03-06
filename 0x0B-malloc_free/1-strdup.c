#include "holberton.h"

/**
 * _strdup - function
 * @str: size of array
 * Return: pointer
 */
char *_strdup(char *str)
{
	char *arr;
	int i, len;

	if (!str)
		return (NULL);
	for (len = 1; str[len] != '\0'; len++)
	{
	}
	arr = malloc((len + 1) * sizeof(char));

	if (len == 0 || !arr)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		arr[i] = str[i];
	}
	arr[len] = str[len];
	return (arr);
}
