#include "holberton.h"

/**
 * _isupper - function
 * @c: int value of char
 * Return: 1 if uppercase
 * if not, 0 is returned.
 */
int _isupper(int c)
{
	int a;

	if (c >= 65 && c <= 90)
		a = 1;
	else
		a = 0;
	return (a);

}
