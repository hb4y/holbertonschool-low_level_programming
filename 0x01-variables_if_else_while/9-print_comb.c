#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - This is the preferred style for multi-line
 * comments in C source code.
 * Please use it consistently.
 * Return: 0
 * Description:  n is positive, negative or zero
 */
int main(void)
{
	int ch;

	for (ch = 48; ch <= 57; ch++)
	{
		putchar(ch);
		if (ch != 57)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar(10);
	return (0);
}
