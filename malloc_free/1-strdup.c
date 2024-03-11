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
	char *sourceString;
	int length = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (sourceString[length] = 0)
		length++;
	sourceString = (char*)malloc(sizeof(*str) * (length + 1));

	while (*str)
		*sourceString++ = *str++;
	*sourceString = '\0';

	return (sourceString);
}
