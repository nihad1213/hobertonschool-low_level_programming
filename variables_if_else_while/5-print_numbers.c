#include <stdio.h>

/**
 * main - print numbers from 0 to 10
 *
 * return always 0
 */
int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
		printf("%d", number);

	printf("\n");

	return (0);
}
