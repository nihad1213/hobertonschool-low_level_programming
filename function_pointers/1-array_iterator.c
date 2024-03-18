#include "function_pointers.h"

/**
 * array_iterator: executes function given as a paramenter
 * on each element of an array
 * @array: array
 * @size: size
 * action: a pointer to the size of the array
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}

}
