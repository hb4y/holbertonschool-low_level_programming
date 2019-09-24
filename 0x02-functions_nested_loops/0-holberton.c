#include "holberton.h"
/**
 * main - Entry point
 * Description alphabet
 * Return: Always 0 (Success)
 **/

int main(void)
{
	int i;
	char a[] = {'H', 'o', 'l', 'b', 'e', 'r', 't', 'o', 'n', '\n'};

	for (i = 0; i < 10; i++)
	{
		_putchar(a[i]);
	}
	return (0);
}
