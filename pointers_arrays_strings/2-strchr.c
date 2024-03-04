#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: character
 * Return: Null
 */
char *_strchr(char *s, char c)
{
	while (*s && *s != c)
	{
		++s;
	}
	if (c == *s)
	{
		return ((char *)s);
	}
	else
	{
		return (NULL);
	}
}
