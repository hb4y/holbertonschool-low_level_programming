#include "holberton.h"

/**
 * string_nconcat - concat 2 strings unitl n bytes
 * @s1: char *
 * @s2: char *
 * @n: n bytes of s2 to concat
 * Return: char pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *arr;
	int len, i;
	unsigned int j, len2;

	for (len = 1; s1[len] != '\0'; len++)
		;
	for (len2 = 1; s2[len2] != '\0'; len2++)
		;

	arr = malloc((len + n) * sizeof(char));

	if (!arr)
		return (NULL);
	if (len2 <= n)
		n = len2;
	for (i = 0; i < len; i++)
		arr[i] = s1[i];
	for (j = 0; j < n; j++, i++)
		arr[i] = s2[j];
	arr[i] = '\0';
	return (arr);
}
