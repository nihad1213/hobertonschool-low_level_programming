#include "main.h"

/**
 * sqrt2 - check number have sqrt
 * @a: integer 1
 * @b: integer 2
 * Return: b if b * b = a
 * -1 if b * b > a
*/
int sqrt2(int a, int b)
{
	if (b * b == a)
		return (b);
	else if (b * b > a)
		return (-1);
	return (sqrt2(a, b + 1));
}

/**
 * _sqrt_recursion - return natural square root
 * of number
 * @n: integer
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	return (sqrt2(n, 1));
}
