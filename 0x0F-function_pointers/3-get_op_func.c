#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * get_op_func - Function to get operator
 *
 * @s: operator
 *
 * Return: result of operation
 */

int (*get_op_func(char *s))(int, int)
{
	op_t operations[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i;

	while (operations[i].op != NULL && *(operations[i].op) != *s)
		i++;

	return (operations[i].f);
}
