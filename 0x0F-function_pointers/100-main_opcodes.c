#include <stdlib.h>
#include <stdio.h>
/**
 * main - check the code for Holberton School students.
 * @argc: argument count
 * @argv: argument array
 * Return: Always 0.
 */


int main(int argc, char *argv[])
{
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	if (argv[1][0] == '-')
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < atoi(argv[1]); i++)
	{
		printf("%x", *((char *)main + i) & 0xff);

		if (i < (atoi(argv[1]) - 1))
			printf(" ");
	}

	printf("\n");


	return (0);
}
