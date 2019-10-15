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
	
	arr = malloc(len * sizeof(str[0]));

	if (len == 0)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		arr[i] = str[i];
	}
	return (arr);
}
