#include "main.h"
#define LONGBITS (sizeof(long int) * 8)

/**
 * get_bit - bit valure in n at index
 * @n: input num
 * @index: index element
 * Return: bit value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index <= LONGBITS)
		return ((n >> index) & 1);
	return (-1);
}
