#include "main.h"
#include <stddef.h>

/**
 * _strchar -  locates a character in a string
 * @s: string
 * @c: character
 * Return: ptr
 */
char *_strchr(char *s, char c)
{
	char *ptr;

	if (s == NULL)
		return (NULL);
	for (ptr = s; *ptr; ptr++)
	{
		if (*ptr == c)
			return (ptr);
	}
}
