#include <stdio.h>


/**
 * main - Prints numbers in hexadecimal.
 *
 * Return: Always 0.
 */
int main(void)
{
	char hexDigits[] = "0123456789abcdef";
	int i;
	
	for (i = 0; i < 16; i++)
		putchar(hexDigits[i]);
	putchar('\n');
	return (0);
}
