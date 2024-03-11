#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * create_array - create an array of chars, and
 * initializes it with a specific char
 * @size: size of array
 * @c: array of chars
 * Return: NULL if size = 0
 * Return a pointer to the array
 * or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	if (size != 0)
	{
		array = (char *)malloc(size * sizeof(char));
		if (array != NULL)
		{
			for (i = 0; i < size; i++)
			{
				array[i] = c;
			}
		}
	}
	
	return (0);
}
