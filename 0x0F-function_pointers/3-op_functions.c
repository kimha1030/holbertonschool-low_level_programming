#include "3-calc.h"
#include <stdio.h>
/**
 * op_add - function that returns the sum of two numbers
 * @a: integer
 * @b: integer
 * @result: result of operation
 * Return: Nothing.
 */

int op_add(int a, int b)
{
	int result = a + b;
	return (result);
}


/**
 * op_sub - function that returns the difference of two numbers
 * @a: integer
 * @b: integer
 * @result: result of operation
 * Return: Nothing.
 */
int op_sub(int a, int b)
{
	int result = a - b;
	return (result);
}

/**
 * op_mul - function that returns the product of two numbers
 * @a: integer
 * @b: integer
 * @result: result of operation
 * Return: Nothing.
 */
int op_mul(int a, int b)
{
	int result = a * b;
	return (result);
}


/**
 * op_div - function that returns the result of division of two numbers
 * @a: integer
 * @b: integer
 * @result: result of operation
 * Return: Nothing.
 */
int op_div(int a, int b)
{
	int result = a / b;
	return (result);
}

/**
 * op_mod - function that returns the remainder of two numbers
 * @a: integer
 * @b: integer
 * @result: result of operation
 * Return: Nothing.
 */
int op_mod(int a, int b)
{
	int result = a % b;
	return (result);
}
