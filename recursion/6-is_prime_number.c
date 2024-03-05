#include "main.h"
/**
 * is_prime_number - return 1 if it is prime number
 * otherwise 0
 * @n: integer number
 * Return: return 1 if it is prime number
 * otherwise 0 
 */
int is_prime_number(int n)
{
	
	if (n / n == 1 && n / 1 == n)
	{
		return (1);
	}
	else if (n / is_prime_number(n - 1) == 1)
	{
		return (0);
	}
	else if (n == 1)
	{
		return (0);
	}
}
