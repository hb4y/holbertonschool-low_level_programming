#include "holberton.h"

/**
 * _calloc - calloc
 * @nmemb: size of array 
 * @size: size of data
 * Return: char pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;
	
	if (size == 0 || nmemb == 0)
		return (NULL);

	arr = malloc(nmemb * size);

	if (!arr)
		return (NULL);

	arr = (char *)arr;
	_memset(arr, '\0', (nmemb * size));
	return (arr);
}

/**
 * _memset - function
 * @s: char pointer
 * @b: char
 * @n: n bytes
 * Return: pointer to memo
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) = b;
	return (s);
}
