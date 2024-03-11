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
	if (str == NULL)
	{
		return (NULL);
	}

	char *sourceString;
	char *p;
	int length = 0;

	while (sourceString[length])
		length++;

	sourceString = malloc(length + 1);
	p = sourceString;

	while (*str)
		*p++ = *sourceString++;

	*p = '\0';

	return (str);
}
