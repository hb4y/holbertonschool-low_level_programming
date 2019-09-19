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
	int ch4;

	for (ch = 48; ch <= 57; ch++)
	{
		for (ch2 = 48; ch2 <= 56; ch2++)
		{
			for (ch3 = ch; ch3 <= 57; ch3++)
			{
				for (ch4 = ch2 + 1; ch4 <= 57; ch4++)
				{
					putchar(ch);
					putchar(ch2);
					putchar(32);
					putchar(ch3);
					putchar(ch4);
					if (ch != 57 || ch2 != 56)
					{
						putchar(44);
						putchar(32);
					}
				}
			}
		}
	}
	putchar(10);
	return (0);
}
