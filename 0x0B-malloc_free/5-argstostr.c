#include "holberton.h"

/**
 * argstostr - function
 * @ac: arg count
 * @av: arguments
 * Return: void
 */
char *argstostr(int ac, char **av)
{
	char *c;
	int i, j, len, k;

	len = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			len++;
		}
	}
	c = (char *)malloc((len + ac) * sizeof(char));
	
	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, k++)
		{
			c[k] = av[i][j];
		}
		c[k++] = '\n';
	}
	return (c);
}
