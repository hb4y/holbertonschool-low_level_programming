#include "holberton.h"

/**
 * print_triangle - function
 * @n: size of triangle
 * Return: void
 * print a triangle of size n.
 */
int main(void)
{
	long unsigned int i;
	long unsigned int n;

	i = 612852475143;
	
	for (n = 3; n <= sqrt(i); n = n + 2)
		while (i % n == 0)
			i = i / n;
	printf("%lu\n", i);
	return (0);
}
