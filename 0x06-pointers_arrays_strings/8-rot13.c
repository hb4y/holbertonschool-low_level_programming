#include "holberton.h"

/**
 * rot13 - rotate 13.
 * @c: init char
 * Return: int
 */

char *rot13(char *c)
{
	int i;
	/*char *min = "abcdefghijklmnopqrstuvwxyz";*/
	/*char *may = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";*/

	for (i = 0; c[i] != '\0'; i++)
	{
		if ((c[i] >= 97 && c[i] <= 122))
			c[i] = (((c[i] - 97) + 13) % 26) + 97;
		else if (c[i] >= 65 && c[i] <= 90)
			c[i] = (((c[i] - 65) + 13) % 26) + 65;
	}
	return (c);
}
