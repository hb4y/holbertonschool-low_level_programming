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
	int ch3;

	for (ch = 48; ch <= 57; ch++)
	{
		for (ch2 = ch + 1; ch2 <= 57; ch2++)
		{
			for (ch3 = ch2 + 1; ch3 <= 57; ch3++)
			{
				putchar(ch);
				putchar(ch2);
				putchar(ch3);
				if (ch != 55 || ch2 != 56 || ch3 != 57)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar(10);
	return (0);
}
