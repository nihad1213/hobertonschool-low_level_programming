#include "main.h"

/**
 * puts_half - prints half of string
 * @str: string
 * Return: void
 */
void puts_half(char *str)
{
	int i, length;

	while (*(length + str) != '\0')
	{
		length++;
	}
	
	length = i;
	if (length % 2 != 0)
	{
		length = (length - 1) / 2;
	}
	else
	{
		length = length / 2;
	}
	while (length < i)
	{
		length++;
		_putchar(*(str + length - 1));
	}

	_putchar('\n');
}
