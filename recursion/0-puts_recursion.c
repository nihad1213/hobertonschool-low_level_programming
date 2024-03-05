#include "main.h"
/**
 * _puts_recursion - print string followed by new line
 * @s: string
 * Return: 
 */
void _puts_recursion(char *s)
{
	if (*s == "0")
	{
		return (*s);
	}
	else
	{
		_puts('\n');
		return (_puts_recursion(*s - 1));
	}
}
