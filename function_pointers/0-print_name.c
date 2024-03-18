#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name: print name
 * @name: name
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	char newName;
	*name = newName
	f(newName);
}
