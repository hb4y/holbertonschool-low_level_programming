#include "holberton.h"

/**
 * jack_bauer - function
 *
 * Return: void
 * Print all hours.
 */
void times_table(void)
{
	int a;
	int b;
	int res;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			res = a * b;

			if (res > 9)
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
