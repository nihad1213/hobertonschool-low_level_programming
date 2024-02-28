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

		if (i != n - 1)
		{
			printf("%d, ", a[i]);
		}
		else
		{
			printf("%d", a[i]);		
		}
	i++;
	}

	printf("\n");
}
