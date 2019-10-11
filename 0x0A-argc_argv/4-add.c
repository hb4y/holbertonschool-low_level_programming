#include "holberton.h"

/**
 * main - function
 * @argc: number of arguments
 * @argv: pointer to string @argc: number of arguments
 * @argv: pointer to strings
 * Return: Always 0
 */

int main(int argc, char **argv)
{
	int i, j, flag, sum;

	sum = 0;
	if (argc == 1)
		printf("%d\n", sum);
	else
	{
		for (i = 1; i < argc; i++)
		{
			flag = 0;
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if ((int)argv[i][j] < 48 || (int)argv[i][j] > 57)
				{
					printf("Error\n");
					return (0);
				}
				flag = 1;
			}
			if (flag == 1)
			{
				sum += atoi(argv[i]);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
