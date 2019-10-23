#include "3-calc.h"
/**
 * get_op_func - function
 * @s: operator
 * Return: int
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;

	while (*s != (*ops[i].op) && (*ops[i].f) != NULL)
	{
		i++;
	}

	if ((*ops[i].f) == NULL || s[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	return (*(ops[i].f));
}
