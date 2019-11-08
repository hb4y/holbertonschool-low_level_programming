#include "holberton.h"
/**
 * get_endianness - function
 * Return: 1 for Little Indian 0 for Big Endian
 */
int get_endianness(void)
{
	int endian = 0x7698967F;
	char *c = (char *) &endian;

	if (*c == 0x7f)
		return (1);
	else
		return (0);
}
