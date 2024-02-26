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
		for (int i = 0; i < size; i++) 
		{ 
  
        		// loop for printing leading whitespaces 
        		for (int j = 0; j < 2 * (size - i) - 1; j++)
        		{ 
            			_puts(' '); 
        		} 
  
        		// loop for printing * character 
        		for (int k = 0; k <= i; k++)
        		{ 
            			_puts('# '); 
        		} 
        		printf("\n"); 
        	}
	}
	else
	{
	printf("\n");
	}
}

int main () 
{
    
    print_triangle(3);
    return 0;
}
