#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
/**
 * op_add - return sum of two numbers
 * @a: number one
 * @b: number two
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - gives difference of two numbers
 * @a: num
 * @b: num
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - gives multiplication
 * @a: first number
 * @b: second number
 * Return: result of product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - gives division result
 * @a: num
 * @b: num
 * Return: quotient of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - gives division remainder
 * @a: num
 * @b: num
 * Return: remainder
 */
int op_mod(int a, int b)
{
	return (a % b);
}
