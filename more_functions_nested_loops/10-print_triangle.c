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
	int j;
	int k;

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j < 2 * (size - i); j++)
		{
			_putchar(' ');
		}
        
        	for (k = 1; k <= i; k++) {
            		_putchar('#');
        	}
		_putchar('\n');
	}
	if (size == 0 && size < 0)
        	_putchar('\n');

	_putchar('\n');
}
