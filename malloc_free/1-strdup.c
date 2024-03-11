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
	char *p;
	int length = 0;

	if (str == NULL)
	{
		return (NULL);	
	}

	while (source[length])
	{
		length++;
	}
	
	source = malloc(length + 1);
	p = source;

	while (*str)
	{
		*p++ = *str++;
	}
	p = '\0';

	return (source);
}
