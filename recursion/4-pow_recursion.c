#include "main.h"
/**
 * _pow_recursoion - find value of x raised to
 * the power of y
 * @x: number1
 * @y: number2
 * Return: result
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	return (x * _pow_recursion(x, y - 1));
}

