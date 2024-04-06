#include "main.h"
#define LONGBITS (sizeof(long int) * 8)

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: ?
 * @index: ?
 * Return: ?
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask = 1;

	if (n && index <= LONGBITS)
	{
		mask = 1 << index;
		mask = ~mask;
		*n &= mask;
		return (1);
	}
	return (-1);
}
