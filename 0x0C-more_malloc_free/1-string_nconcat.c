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

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (len = 1; s1[len] != '\0'; len++)
		;
	for (len2 = 1; s2[len2] != '\0'; len2++)
		;

	if (len2 <= n)
		n = len2;
	arr = malloc((len + n + 1) * sizeof(char));

	if (!arr)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		arr[i] = s1[i];
	for (j = 0; j < n; j++, i++)
		arr[i] = s2[j];
	arr[i] = '\0';
	return (arr);
}
