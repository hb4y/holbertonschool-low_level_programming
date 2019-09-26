#include "holberton.h"

/**
 * main - function
 * Return: 0
 * largest prime factor.
 */
int main(void)
{
	long i;
	long n;

	i = 612852475143;
	for (n = 3; n <= sqrt(i); n = n + 2)
		while (i % n == 0)
			i = i / n;
	printf("%ld\n", i);
	return (0);
}
