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
	if (argc != 3)
		printf("Error\n");
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	}
	return (0);
}
