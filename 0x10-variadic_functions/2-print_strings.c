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
	char *c;

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		c = va_arg(valist, char *);

		if (c)
			printf("%s", c);
		else
			printf("(nil)");
		if (separator && i < n - 1)
			printf("%s", separator);
	}
	printf("%s\n", va_arg(valist, char *));

	va_end(valist);
}
