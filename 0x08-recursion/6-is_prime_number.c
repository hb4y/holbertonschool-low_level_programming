#include "holberton.h"

/**
 * is_prime_number - function
 * @n: int to check if prime
 * Return: int n
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime(n, 2));
}

/**
 * is_prime - function
 * @n: int
 * @div: div by
 * Return: 1 if prime; 0 if not
 */

int is_prime(int n, int div)
{
	if (div <= (n - 1))
	{
		if (n % div == 0)
		{
			return (0);
		}
		return (is_prime(n, div + 1));
	}
	return (1);
}
