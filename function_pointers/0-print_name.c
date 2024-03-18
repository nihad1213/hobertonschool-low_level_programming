#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - print name
 * @name: name
 * @f: function pointer take string as a argument
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
