#include "main.h"
/**
 * _sqrt_recursion - returns the natural 
 * square root of a number
 * @n: integer
 * Return: square root of number
 */
int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
		return (n);

	int i,
	int result;
	i = 1;
	result = 1;

	while (result <= n)
	{
		i++;
		result = i * i;
	}

	return (i - 1);
}
