#include "main.h"

/**
 * print_chessboard - print chessboard
 * @a: character
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int wide;
	int length;
	wide = 0;
	length = 0;

	while (wide < 8)
	{
		length = 0;
		while (length < 8)
		{
			_putchar(a[wide][length]);
			length++;
		}

		_putchar('\n');
		wide++;
	}
}
