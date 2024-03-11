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
	int length = 0;
	char *source;
	char *target;

	if (str == NULL)
	{
		return (NULL);
	}

	source = str;

	while (*source++)
		length++;
	
	target = malloc(length + 1);

	if (target == NULL)
	{
		return (NULL);
	}

	source = target;

	while (*str)
		*source++ = *target++;

	*source = 0;

	return (target);
}
