#include "holberton.h"

/**
 * times_table - function
 *
 * Return: void
 * Print all hours.
 */
void times_table(int n)
{
	int a;
	int b;
	int res;

	if (n <= 15 || n >= 0)
	{
	for (a = 0; a <= 15; a++)
	{
		for (b = 0; b <= 15; b++)
		{
			res = a * b;

			if (res > 9 && )
			{
				_putchar(((res / 10) % 10) + '0');
			}
			_putchar((res % 10) + '0');
			if (b != 9)
			{
				_putchar(',');
				_putchar(' ');
				if ((a * (b + 1)) <= 9)
				{
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
	}
}
