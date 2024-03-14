#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees dog
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;	
	}

	if (d->name)
	{
		free(name);
	}

	if (d->owner)
	{
		free(owner);
	}
}
