#include "holberton.h"
/**
 * main - Entry point
 * Description alphabet
 * Return: Always 0 (Success)
 **/

int main(void)
{
	long int one = 1;
	long int two = 2;
	long int hold;
	int n;

	printf("1, 2, ");
	for (n = 3; n <= 50; n++)
	{
		hold = one + two;

		printf("%ld", hold);
		if (n != 50)
			printf(", ");
		one = two;
		two = hold;
	}
	printf("\n");

	return (0);
}
