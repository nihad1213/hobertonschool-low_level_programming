#include "dog.h"
#include <string.h>
/**
 * print_dog - print strcut dog
 * @d: struct
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		printf("");
	}
	if (d->name == NULL)
	{
		d->name = "nill";
	}
	if (d->age == NULL)
	{
		d->age = "nill";
	}
	if (d->owner == NULL)
	{
		d->owner == "nill";
	}

	printf("Name: %s\nAge: %f\n Owner: %lf", d->name, d->age, d->owner);
}
