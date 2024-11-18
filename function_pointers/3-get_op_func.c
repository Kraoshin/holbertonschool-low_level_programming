#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - function pointer to different calc func
 * @s: the operator that'll choose which calc func we use
 * Return: the calc function, NULL otherwise
 */

int (*get_op_func(char *s))(int, int)
{
	int i;

	i = 0;

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	while (i < 5)
	{
		if (ops[i]->op == s)
			return (ops[i]);
		i++;
	}

	return (NULL);
}
