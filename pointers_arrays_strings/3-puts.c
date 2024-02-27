#include "main.h"

/**
 * _puts - print string
 * @str: string
 * Return: void
 */
void _puts(char *str)
{
	if (*str == '\0') return;
	_puts(str + 1);
	_puts(*str);
}
