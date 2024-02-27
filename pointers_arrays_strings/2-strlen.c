#include "main.h"

/**
 * _strlen - return length of string
 * @s: string
 * Return: void
 */
int _strlen(char *s)
{
	int length = 0;
	int i;

	for (i = 0; *s[i] != '\0'; i++)
	{
		length++;
	}
}
