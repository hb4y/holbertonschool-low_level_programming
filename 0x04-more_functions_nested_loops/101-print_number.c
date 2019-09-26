#include "holberton.h"

void print_number(int n)
{
	int m;
	int tmp;

	m = 1;
	tmp = n;
	if (n < 0)
	{
		n = n * -1;
		_putchar('-');
	}
	while(tmp / 10 != 0)
	{
		m = m * 10;
		tmp = tmp / 10;
	}
	while((n / m != 0) && (m != 1))
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
