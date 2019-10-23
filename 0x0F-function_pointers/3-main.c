#include "3-calc.h"
/**
 * main - check the code for Holberton School students.
 * @argc: argument count
 * @argv: argument array
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int res;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	func = get_op_func(argv[2]);

	if (!func)
	{
		printf("Error\n");
		exit(99);
	}

	res = func(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", res);

	return (0);
}
