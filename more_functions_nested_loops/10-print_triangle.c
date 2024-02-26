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

	if (size > 0)
	{
		for (i = 0; i < size; i++) 
		{ 
  

        		for (j = 0; j < 2 * (size - i) - 1; j++)
        		{ 
            			_putchar(' '); 
        		} 
 
        		for (k = 0; k <= i; k++)
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
