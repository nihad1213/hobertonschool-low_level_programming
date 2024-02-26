#include "main.h"
/**
 * print_triangle - draw triangle
 * @size: define the size of triangle
 *
 * Return: void
 */


void print_triangle(int size)
{
	int i;
	int j;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = size - i; j > 0; j--)
			{
				_putchar(' ');
			}

			for (j = 0; j < i; j++)
			{
				_putchar('#');
			}

			_putchar('\n');	
		}
	}
	else
	{
		_putchar('\n');
	}
}
