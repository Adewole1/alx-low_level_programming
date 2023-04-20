#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - Function to add 2 numbers together
 *
 * @a: first number
 * @b: second_number
 *
 * Return: the sum of the 2 numbers
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Function to find th difference of 2 numbers
 *
 * @a: first number+
 * @b: second_number
 *
 * Return: the difference of the 2 numbers
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Function to multiply 2 numbers together
 *
 * @a: first number
 * @b: second_number
 *
 * Return: the product of the 2 numbers
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Function to divide 2 numbers
 *
 * @a: first number
 * @b: second_number
 *
 * Return: the divide of the 2 numbers
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Function to remainder from division of 2 numbers
 *
 * @a: first number
 * @b: second_number
 *
 * Return: the modulo of the 2 numbers
 */

int op_mod(int a, int b)
{
	return (a % b);
}
