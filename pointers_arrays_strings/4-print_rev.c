#include "main.h"
/**
 * print_rev - print string in reverse
 * @s: string
 * Return: void
 */
print_rev(char *s)
{
	int length = 0;
	int length2;

	while (*(length + s) != '\0')
	{
		length++;
	}

	length = length2;

	while (length >= 0)
	{
		if (*(length + s) != '"' && length2 != 0)
		{
			_putchar(*(s + length));
		}
	}

	_putchar('\n');
}
