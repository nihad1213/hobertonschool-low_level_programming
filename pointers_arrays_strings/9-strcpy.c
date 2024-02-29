#include "main.h"

/**
 * _strcpy - copy string
 * @dest: buffer
 * @src: source
 * Return: *dest
 */

char *_strcpy(char *dest, char *src)
{
	while (*src != '\0')
	{
		*src = *dest;
		*src++;
		*dest++;
	}

	*dest = '\0';

	return dest;
}
