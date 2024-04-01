#include "lists.h"
#include <stdio.h>

/**
 * print_lists - print all elements of list
 * @h: list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			_putchar('[');
			_putchar('0');
			_putchar(']');
			_putchar(' ');
			_putchar('(');
			_puthcar('n');
			_putchar('i');
			_putchar('l');
			_putchar(')');
		}
		else
		{
			printf("[%d] %s", h->len, h->str);
		}

		nodes++;
		h = h->next;
	}

	return (nodes);
}
