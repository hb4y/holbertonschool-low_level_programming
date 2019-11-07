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


/**
 * binary_to_uint - function
 * @b: char array of 0 and 1
 * Return: converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	int i, j;
	unsigned int uint;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}

	uint = 0;
	i--;

	for (j = 0; i >= 0; i--, j++)
	{
		if (b[i] == '1')
			uint += _pow_recursion(2, j);
	}

	return (uint);
}
