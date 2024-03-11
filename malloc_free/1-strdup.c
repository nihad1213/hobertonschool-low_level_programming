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
	size_t length = 0;
	char *duplicateString;
	size_t index;

	while (str[length] != '\0')
	{
		length++;
	}

	if (str == NULL)
	{
		return (NULL);
	}
	
	char *duplicateString = (char *)malloc(length + 1);
	
	if (duplicateString == NULL)
	{
		return (NULL);
	}

	for (index = 0; index <= length; index++)
	{
		duplicateString = str[i];
	}

	return (duplicateString);
}
