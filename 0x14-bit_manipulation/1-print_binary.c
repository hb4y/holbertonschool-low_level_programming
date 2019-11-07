#include "holberton.h"
/**
 * print_binary - function
 * @n: unsigned long int to base 2
 * Return: void, print number
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask;
	int flag;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	if (n == 1)
	{
		_putchar('1');
		return;
	}

	flag = 0;

	for (mask = 1UL << 63; mask > 0; mask = mask >> 1)
	{
		if (n & mask)
		{
			_putchar('1');
			flag = 1;
		} else
		{
			if (flag)
				_putchar('0');
		}
	}
}
