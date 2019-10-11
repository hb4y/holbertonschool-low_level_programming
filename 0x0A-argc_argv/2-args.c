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
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	(void)argv;
	return (0);
}
