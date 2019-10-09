#include "holberton.h"

/**
 * _pow_recursion  - function
 * @x: int base
 * @y: int power
 * Return: x power y
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
