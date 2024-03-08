#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints sum of the 2 
 * diagonals of square matrix of integers
 * @size: size
 * @a: integer
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int n1 = 0;
	int n2 = 0;
	int i = 0;

	while (i < size)
	{
		n1 += a[i * (size + 1)];
		n2 += a[(i + 1) * (size - 1)];
		i++;
	}
	printf("%d, ", n1);
	printf("%d", n2);
	printf("\n");
}
