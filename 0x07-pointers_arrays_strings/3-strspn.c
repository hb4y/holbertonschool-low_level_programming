#include "holberton.h"

/**
 * _strspn - function
 * @s: char pointer
 * @accept: accepted bytes
 * Return: uns int
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n, i, j, flag;

	n = 0;
	flag = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		flag = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				n++;
				flag = 1;
				break;
			}
		}
		if (flag == 0)
			break;
	}
	return (n);
}
