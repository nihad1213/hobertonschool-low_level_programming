#include "main.h"
#include <string.h>

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

/**
 * _strspn - get length of prefix substring
 * @s: string 1
 * @accept: string 2
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;

	if ((s == NULL) || (accept == NULL))
	{
		return (length);
	}
	while (*s && _strchr(accept, *s++))
	{
		length++;
	}

	return (length);
}
