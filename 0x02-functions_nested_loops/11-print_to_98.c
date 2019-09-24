#include "holberton.h"

/**
 * print_to_98 - function
 * @n: init integer
 *
 * Return: void
 * Print all hours.
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			} else
				printf("\n");
		}
	} else
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			} else
				printf("\n");
		}
	}
}
