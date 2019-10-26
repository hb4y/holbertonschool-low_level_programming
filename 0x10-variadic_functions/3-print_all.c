#include "variadic_functions.h"
/**
 * p_char_pntr - function
 * @valist: int :arguments
 * Return: print
 */
void p_char_pntr(va_list valist)
{
	char *c;

	c = va_arg(valist, char *);

	if (c)
	{
		printf("%s", c);
		return;
	}
	printf("(nil)");
}
/**
 * p_float - function
 * @valist: float
 * Return: print
 */
void p_float(va_list valist)
{
	printf("%f", va_arg(valist, double));
}
/**
 * p_int - function
 * @valist: int
 * Return: print
 */
void p_int(va_list valist)
{
	printf("%d", va_arg(valist, int));
}
/**
 * p_char - function
 * @valist: char pntr
 * Return: print
 */
void p_char(va_list valist)
{
	printf("%c", va_arg(valist, int));
}
/**
 * print_all - function
 * @format: format of the char* to print
 * Return: print
 */
void print_all(const char * const format, ...)
{
	va_list valist;
	unsigned int i, j;
	char *sep;

	op_t ops[] = {
	{"c", p_char},
	{"i", p_int},
	{"f", p_float},
	{"s", p_char_pntr},
	{NULL, NULL}
	};

	va_start(valist, format);
	i = 0;
	sep = "";

	while (format && format[i] != '\0')
	{
		j = 0;
		while (ops[j].op)
		{
			if (*(ops[j].op) == format[i])
			{
				printf("%s", sep);
				ops[j].f(valist);
				sep = ", ";
				break;
			}
			j++;
		}
		i++;
	}

	va_end(valist);

	printf("\n");
}
