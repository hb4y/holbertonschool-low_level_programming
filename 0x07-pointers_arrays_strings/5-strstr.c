#include "holberton.h"

/**
 * _strstr - function
 * @haystack: char pointer
 * @needle: char pointer
 * Return: char pntr or null
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j;
	int len, count;
	char *tmp;

	tmp = needle;
	for (len = 0; needle[len] != '\0'; len++)
		continue;

	count = 0;
	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i] == needle[j])
			{
				count++;
				if (needle[j] == haystack[i + 1] && needle[j + 1] != haystack[i + 1])
					haystack++;
				needle++;
				if (count == len)
					return (haystack + (i - (len - 1)));
				break;
			}
			count = 0;
			needle = tmp;
			break;
		}
	}
	return (NULL);
}
