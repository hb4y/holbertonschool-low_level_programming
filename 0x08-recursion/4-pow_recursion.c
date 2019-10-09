#include "holberton.h"

/**
 * _pow_recursion  - function
 * @n: int to calculate factorial
 * Return: int factorial of n
 */
int _pow_recursion(int x, int y)
{
	int pow;

	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);

	pow = 1;
	y--;
	pow = x * _pow_recursion(x, y);
	return (pow);
}
