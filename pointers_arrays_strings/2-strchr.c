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
	for (;; s++)
	{
		if (*s == c)
		{
			return s;
		}

		if (!*s)
		{
			return NULL;	
		}

		return NULL;
	}
}
