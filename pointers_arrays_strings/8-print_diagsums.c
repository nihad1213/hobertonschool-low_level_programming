#include "main.h"

/**
 * print_diagsums - prints sum of the 2 
 * diagonals of square matrix of integers
 * @size: size
 * @a: integer
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, sumRight, sumLeft;
    	sumRight = sumLeft = 0;
    
    	for (i = 0; i < (size * size); i = size + i + 1) {
        	sumRight += a[i];
    	}
    
    	for (i = size-1; i < (size * size - 1); i = size + i -1 ) {
        	sumLeft += a[i];
   	}
}
