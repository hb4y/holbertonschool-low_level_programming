#include "holberton.h"

/**
 * str_concat - function
 * @s1: pntr to string
 * @s2: pntr to string
 * Return: pointer
 */
char *str_concat(char *s1, char *s2)
{
	char *arr = "test";
	int i, j, len, len2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (len = 0; s1[len] != '\0'; len++)
		;
	for (len2 = 0; s2[len2] != '\0'; len2++)
		;

	arr = malloc((len + len2 + 1) * sizeof(char));
	if (!arr)
		return (NULL);
	for (i = 0; i < len; i++)
		arr[i] = s1[i];
	for (j = 0; i < (len + len2); i++, j++)
		arr[i] = s2[j];
	arr[i] = '\0';
	return (arr);
}
