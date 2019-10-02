#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - main to print a valid pass.
 * Return: 0 on sucess
 */

int main(void)
{
	int n, pass, i;

	pass = 2772;
	srand(time(NULL));
	n = (rand() % (122 - 48 + 1)) + 48;

	for (i = pass / n; i > 0; i--)
		printf("%c", n);
	printf("%c", pass - ((pass / n) * n));
	return (0);
}
