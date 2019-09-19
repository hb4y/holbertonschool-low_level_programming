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
	int ch2;

	for (ch = 48; ch <= 57; ch++)
	{
		for (ch2 = ch + 1; ch2 <= 57; ch2++)
		{
			putchar(ch);
			putchar(ch2);
			if (ch != 56 || ch2 != 57)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar(10);
	return (0);
}
