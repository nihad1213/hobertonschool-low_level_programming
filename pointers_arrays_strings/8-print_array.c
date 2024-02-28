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
	int i;

	while (i < n)
	{
		i++;
		printf("%d, ", a[i]);
	}
}
