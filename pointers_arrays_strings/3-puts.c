#include "main.h"

/**
 * _puts - print string
 * @str: string
 * Return: void
 */
void _puts(char *str)
{
	int length = 0;

	while (*(length + str) != '\0')
	{
		if (*(length + str) != '"')
		{
			_puts(*(str + length));
		}

		length++;
	}

	_puts('\n');
}
