#include "main.h"
/**
 * _puts_recursion - print string followed by new line
 * @s: string
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (s[0] == '0')
	{
		_putchar('\n');
	}
	else
	{
		/*Print first character*/
		_putchar(s);
		/*Print next character*/
		_puts_recursion(s+1);
	}
}
