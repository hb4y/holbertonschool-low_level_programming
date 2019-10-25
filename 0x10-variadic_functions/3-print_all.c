#include "variadic_functions.h"
/**
 * print_all - function
 * @separator: char pntr separator
 * @n: int :arguments
 * Return: print
 */
void print_all(const char * const format, ...)
{
	va_list valist;
	unsigned int i, num;

	op_t ops[] = {
	{"c", p_char},
	{"i", p_int},
	{"f", p_float},
	{"s", p_char_pntr},
	{NULL, NULL}
	}

	num = 0;

	while ()
	va_start(valist, n);

	for (i = 0; i < (n - 1); i++)
	{
		printf("%s", va_arg(valist, char *));
		printf("%s", separator);
	}
	printf("%s\n", va_arg(valist, char *));

	va_end(valist);
}
