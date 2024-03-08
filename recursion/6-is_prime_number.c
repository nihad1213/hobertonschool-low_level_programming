#include "main.h"
/**
 * is_prime_number - return 1 if it is prime number
 * otherwise 0
 * @n: integer number
 * Return: return 1 if it is prime number
 * otherwise 0 
 */
int prime_finder(int x, int y)
{
	if (x == y)
		return (1);
	if (!(x % y))
		return (0);
	return (prime_finder(x, y + 1));
}
/**
 * is_prime_number - returns if a number is prime
 *
 * @n: number to determine primeness of
 *
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (prime_finder(n, 2));
}
