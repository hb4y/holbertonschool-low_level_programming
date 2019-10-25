#include "variadic_functions.h"
/**
 * print_strings - function
 * @separator: char pntr separator
 * @n: int :arguments
 * Return: print
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;

	va_start(valist, n);

	for (i = 0; i < (n - 1); i++)
	{
		printf("%s", va_arg(valist, char *));
		printf("%s", separator);
	}
	printf("%s\n", va_arg(valist, char *));

	va_end(valist);
}
