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

	if (wide < 8)
	{
		wide = length = 0;
		_putchar(a[wide][length]);
		length++;
	}
	if (length < 8)
	{
		wide = length = 0;
		_putchar(a[wide][length]);
		wide++;
	}
	_putchar('\n');
}
