#include "holberton.h"

/**
 * main - function
 * @argc: number of arguments
 * @argv: pointer to string
 * Return: Always 0
 */

int main(int argc, char **argv)
{
	int cent[5] = {25, 10, 5, 2, 1};
	int i, back, val;

	back = 0;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	val = atoi(argv[1]);
	if (val <= 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < 5; i++)
	{
		if (val >= cent[i])
		{
			back += val / cent[i];
			val = val % cent[i];
		} else if (val == 0)
		{
			break;
		}
	}
	printf("%d\n", back);
	return (0);
}
