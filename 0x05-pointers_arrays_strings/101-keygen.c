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
	int n, pass;

	pass = 2772;
	srand(time(NULL));

	while (pass > 122 && pass > 48)
	{
		n = (rand() % (122 - 48 + 1)) + 48;
		printf("%c", n);
		pass -= n;
	}

	printf("%c", pass);
	return (0);
}
