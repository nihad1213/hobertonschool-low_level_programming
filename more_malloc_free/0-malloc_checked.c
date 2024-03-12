#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - that allocate memory
 * @usingned int b: integer
 * Return: Void
 */
void *malloc_checked(unsigned int b)
{
	int *pointer;
	pointer = malloc(b);

	if (pointer == NULL)
	{
		exit (98);
	}
}
