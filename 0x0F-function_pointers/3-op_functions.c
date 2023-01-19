#include "3-calc.h"

/**
 * op_add - sum of a and b
 * @a: first operand
 * @b: second operand
 * Return: Sum of and b
 **/
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - a - b
 * @a: first operand
 * @b: second operand
 * Return: difference of a and b
 **/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplication of a and b
 * @a: first operand
 * @b: second operand
 * Return: product of a and b
 **/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - a / b
 * @a: first operand
 * @b: second operand
 * Return: result of the division of a by b
 **/
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - a mod b
 * @a: first operand
 * @b: second operand
 * Return: remainder of the division of a by b
 **/
int op_mod(int a, int b)
{
	return (a % b);
}
