#include "main.h"

/**
 * _strcpy - copy string
 * @dest: buffer
 * @src: source
 * Return: *dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;
	while (str[i] != '\0')
	{
		i++;
		dest[i] = src[i];
	}

	dest[i] = '\0';

	return (dest);
}
