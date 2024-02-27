#include "main.h"

/**
 * _strlen - return length of string
 * @s: string
 * Return: void
 */
int _strlen(char *s)
{
	int length = 0;

	while (*(length + s) != '\0')
	{
		length++;
	}

	return (length);
}
