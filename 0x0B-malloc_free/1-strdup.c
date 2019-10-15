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
	arr[i + 1] = '\0';
	return (arr);
}
