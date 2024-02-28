#include "main.h"
#include <stdio.h>

/**
 * print_array - print elements of array 
 * @n: number of elements
 * @a: elements
 * Return: void
 */
void print_array(int *a, int n)
{
	int i = 0;
	
	while (i < n)
	{
		printf("%d", a[i]);

		if(i != n - 1)
		{
			printf("%d, ", a[i]);
		}
	}
}
