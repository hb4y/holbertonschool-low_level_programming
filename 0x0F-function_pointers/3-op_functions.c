#include "function_pointers.h"
/**
 * op_add - function that adds
 * @a: first integer
 * @b: second integer
 * Return: int
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function that subs
 * @a: first integer
 * @b: second integer
 * Return: int
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function that multiplies
 * @a: first integer
 * @b: second integer
 * Return: int 
 */
int op_mul(int a, int b)
{
  return (a * b);
}

/**
 * op_div - function that divides
 * @a: first integer
 * @b: second integer
 * Return: int
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(98);
	}
	return (a / b);
}

/** 
 * op_mod - function that modulo
 * @a: first integer
 * @b: second integer
 * Return: int
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(98);
	}
	return (a % b);
}
