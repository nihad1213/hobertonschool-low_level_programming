#include <stdio.h>


/**
 * main - Prints numbers in hexadecimal.
 *
 * Return: Always 0.
 */
int main(void)
{
	int number;
	char letter;
	
	/*print number part*/
	for (number = 0; number < 10; number++)
		putchar((num % 10) + '0');

	/*print letter part*/
	for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
