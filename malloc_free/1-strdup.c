#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * _strdup - return pointer to a newly allocated
 * space in memory, which contains a copy of the
 * string given as a parameter
 * @str: string
 * Return: NULL if str = NULL else return pointer
 */
char *_strdup(char *str)
{
	int size = 0;
	char *source;
	char *target;

	if (!str)
		return (NULL);

	source = str;
	while (*source++)
		size++;

	target = malloc(size + 1);
	if (!target)
		return (NULL);

	source = target;
	while (*str)
		*source++ = *str++;

	*source = 0;
	return (target);
}
