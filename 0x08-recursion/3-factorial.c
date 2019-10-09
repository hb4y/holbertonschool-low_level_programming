#include "holberton.h"

/**
 * factorial - function
 * @n: int to calculate factorial
 * Return: int factorial of n
 */
int factorial(int n)
{
	int fac;

	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);

	fac = n;
	fac = fac * factorial(n - 1);
	return (fac);
}
