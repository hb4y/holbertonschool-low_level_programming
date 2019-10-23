#include "function_pointers.h"
/**
 * print_name - function
 * @name: char pntr
 * @f: funtion pntr that gets a char pntr
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
