#include "variadic_functions.h"
/**
 * print_numbers - function
 * @separator: char pntr separator
 * @n: int :arguments
 * Return: sum
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;

	va_start(valist, n);

	for (i = 0; i < n - 1; i++)
	{
		printf("%d", va_arg(valist, int));
		if (separator)
			printf("%s", separator);
	}
	printf("%d\n", va_arg(valist, int));

	va_end(valist);
}
