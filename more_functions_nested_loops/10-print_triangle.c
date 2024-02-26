#include "main.h"
/**
 * print_triangle - draw triangle
 *
 *
 * Return: void
 */


void print_triangle(int size)
{
	int i;
	int  j;

	for (i = 1; i <= size; ++i)
	{
		for (j = 1; j <= i; ++j)
		{
			_putchar('#');
		}
		_putchar(' ');
		_putchar('\n');
	}

}
