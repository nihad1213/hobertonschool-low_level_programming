#include <stdio.h>

/**
 * main - print number 0 to 10
 * 
 * Return: Always 0
 */

int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
		putchar((number % 10) + '0');

	putchar('\n');

	return (0);
}
