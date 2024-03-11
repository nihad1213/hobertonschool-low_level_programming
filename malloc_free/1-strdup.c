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
	char *source;
	int length;

	while (source[length])
	{
		length++;
	}

	source = (char *)malloc(sizeof(*str) * (length - 1));
	
	while(*source)
	{
		*str++ = *source++;
	}

	*source = '\0';

	return (source);
}
