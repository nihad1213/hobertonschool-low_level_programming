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
	/*get size of array*/
	size_t arraySize;
	arraySize = sizeof(arr) / sizeof(arr[0]);

	/*print numbers with loop*/
	for (i = 0; i < arraySize; i++)
	{
		printf("%d, ", arr[i]);
	}
}
