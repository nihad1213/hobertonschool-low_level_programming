#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * new_dog - created a new dog
 * @name: name
 * @age: age
 * @owner: owner
 * Return: pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;
	int i, j, a, b;

	i = 0;
	j = 0;

	if (newDog == NULL)
	{
		return (NULL);	
	}

	while (name[i++])
		;
	while (owner[j++])
		;

	newDog->name = malloc(i * sizeof(char) + j * sizeof(char));


}
