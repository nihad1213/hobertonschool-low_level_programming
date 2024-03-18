#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - add 2 integer
 * @a: integer 1
 * @b: integer 2
 * Return: a + b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract 2 integer
 * @a: integer 1
 * @b: integer 2
 * Return: a - b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - find multiplaction of 2 integer
 * @a: integer 1
 * @b: integer 2
 * Return: a * b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - find division of 2 integer
 * @a: integer 1
 * @b: integer 2
 * Return a / b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("\nERROR!");
	}
	
	return (a / b);
}

/**
 * op_mod - modulus of 2 integer
 * @a: integer 1
 * @b: integer 2
 * Return: a * b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("\nERROR!");
	}

	return (a % b);
}
