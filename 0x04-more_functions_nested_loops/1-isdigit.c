#include "holberton.h"

/**
 * _isdigit - function
 * @c: char value
 * Return: 1 if digit
 * if not, 0 is returned.
 */
int _isdigit(int c)
{
	int a;

	if (c >= 48 && c <= 57)
		a = 1;
	else
		a = 0;
	return (a);

}
