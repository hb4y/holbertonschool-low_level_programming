#include "holberton.h"

/**
 * print_number - print digits
 * @n: int to print
 * Return: void
 */
void print_number(int n)
{
	int m;
	int tmp;

	m = 1;
	tmp = n;
	if (n < 0)
	{
		_putchar('-');
		n = abs(n);
	}
	while (tmp / 10 != 0)
	{
		m = m * 10;
		tmp = tmp / 10;
	}
	while ((n / m != 0) && (m != 1))
	{
		_putchar((n / m) + 48);
		n = n % m;
		if (m > 1)
			m = m / 10;
		while (n < m)
		{
			_putchar('0');
			m = m / 10;
		}
	}
	_putchar(n + 48);
}
