#include "holberton.h"

/**
 * jack_bauer - function
 *
 * Return: void
 * Print all hours.
 */
void jack_bauer(void)
{
	int h0, h1, m1, m2;

	for (h0 = '0'; h0 <= '2'; h0++)
	{
		for (h1 = '0'; h1 <= '3'; h1++)
		{
			for (m1 = '0'; m1 <= '5'; m1++)
			{
				for (m2 = '0'; m2 <= '9'; m2++)
				{
					_putchar(h0);
					_putchar(h1);
					_putchar(':');
					_putchar(m1);
					_putchar(m2);
					_putchar('\n');
				}
			}
		}
	}
}
