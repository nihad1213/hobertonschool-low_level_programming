#include "main.h"
#include <string.h>

/**
 * _strspn - get length of prefix substring
 * @s: string 1
 * @accept: string 2
 * Return: number of bytes
 */
unsigned int_strspn(char *s, char *accept)
{
	unsigned int length = 0;

	if ((s == NULL) || (accept == NULL))
	{
		return length;
	}
	while (*s && strchr(accept, *s++))
	{
		length++;
	}

	return (length);
}
