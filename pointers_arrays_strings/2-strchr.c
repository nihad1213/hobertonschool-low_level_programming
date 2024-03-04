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
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (char *)s;
			s++;
		}
	}

	return NULL;
}
