#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min = entered numbers from
 * @max = included number
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *pointer;
	int array;

	if (min > max)
	{
		return (NULL);
	}

	pointer = malloc(sizeof(int) * (max - min + 1));

	if (pointer == NULL)
	{
		return (NULL);
	}

	array = 0;
	while (min <= max)
	{
		pointer[array] = min;
		min++;
		array++;
	}

	return (pointer);
}
