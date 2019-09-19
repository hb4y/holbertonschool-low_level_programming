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
	char ch;

	for (ch = '0'; ch <= '8'; ch++)
	{
		putchar(ch);
		putchar(',');
		putchar(' ');
	}
	putchar('9');
	putchar('\n');
	return (0);
}
