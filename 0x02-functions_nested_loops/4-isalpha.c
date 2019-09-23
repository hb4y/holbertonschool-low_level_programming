#include "holberton.h"

/**
 * main - main function 
 * Return: On success 0.
 * On error, 1 is returned.
 */
int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	} else if (c >= 65 && c <= 90)
	{
		return (1);
	} else
	{
		return (0);
	}
}
