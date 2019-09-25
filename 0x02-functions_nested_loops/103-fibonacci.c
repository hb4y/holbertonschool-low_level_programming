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
	long int sum = 2;

	for (hold = 3; hold <= 4000000; hold = one + two)
	{
		if (hold == 0)
		{
		}
		else if (hold % 2 == 0)
		{
			sum = sum + hold;
		}
		one = two;
		two = hold;
	}
	printf("%ld\n", sum);
	return (0);
}
