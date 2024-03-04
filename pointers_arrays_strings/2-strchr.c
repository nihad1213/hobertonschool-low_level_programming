#include "main.h"

/**
 * _strchar -  locates a character in a string
 * @s: string
 * @c: character
 * Return:
 */
char *_strchr(char *s, char c)
{
	for (;; s++)
	{
		if (*s == c)
			return s;
		else if (!*s)
			return (NULL);
		return (NULL);
	}
}
