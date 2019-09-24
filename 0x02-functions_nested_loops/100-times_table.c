#include "holberton.h"

/**
 * print_times_table - function
 * @n: table n
 *
 * Return: void
 * Print all hours.
 */
void print_times_table(int n)
{
	int a;
	int b;
	int res;

	if (n <= 15 && n >= 0)
	{
	for (a = 0; a <= n; a++)
	{
		for (b = 0; b <= n; b++)
		{
			res = a * b;

			if (res >= 100)
			{
				_putchar(((res / 100) % 10) + '0');
				_putchar(((res / 10) % 10) + '0');
			}
			if (res > 9 && res < 100)
			{
				_putchar(((res / 10) % 10) + '0');
			}
			_putchar((res % 10) + '0');
			if (b != n)
			{
				_putchar(',');
				_putchar(' ');
				if (((a * (b + 1)) > 9) && ((a * (b + 1)) < 100))
				{
					_putchar(' ');
				} else if ((a * (b + 1)) <= 9)
				{
					_putchar(' ');
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
	}
}
