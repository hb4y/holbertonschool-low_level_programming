#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char character;
	int integer;
	long int longinteger;
	long long int llinteger;
	float floatnumber;

	printf("Size of a char: %lu byte(s)\n", sizeof(character));
	printf("Size of an int: %lu byte(s)\n", sizeof(integer));
	printf("Size of a long int: %lu byte(s)\n", sizeof(longinteger));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(llinteger));
	printf("Size of a float: %lu byte(s)\n", sizeof(floatnumber));
	return (0);
}
