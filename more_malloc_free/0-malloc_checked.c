#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - that allocate memory
 * @b: integer
 * Return: Pointer
 */
void *malloc_checked(unsigned int b)
{
	int *pointer;

	pointer = malloc(b);
	if (pointer == NULL)
	{
		exit(98);
	}

	return (pointer);
}
