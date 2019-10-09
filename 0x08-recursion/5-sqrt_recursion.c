#include "holberton.h"

/**
 * _sqrt_recursion  - function
 * @n: int to calculate sqrt
 * Return: int sqrt of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (_sqrt(n, 1));
}

/**
 * _sqrt - function
 * @n: int to calculate sqrt
 * @count: int to test sqrt of n
 * Return: int sqrt of n
 */

int _sqrt(int n, int count)
{
	int acum;

	acum = count * count;
	if (acum == n)
		return (count);
	if (acum < n)
		return (_sqrt(n, count + 1));
	return (-1);
}
