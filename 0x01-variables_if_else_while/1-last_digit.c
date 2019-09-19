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
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is ", n);
	n = n % 10;
	if (n > 5)
	{
		printf("%d and is greater than 5\n", n);
	} else if ((n < 6) && (n != 0))
	{
		printf("%d and is less than 6 and not 0\n", n);
	} else
	{
		printf("%d and is 0\n", n);
	}
	return (0);
}
