#include "main.h"

/**
 * swap_int - swaps value of two integer
 * @a: integer 1
 * @b: integer 2
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
