#include <stdio.h>

/**
 * main - print all argument it receives 
 * @argc: number of arguments
 * @argv: lsiting all arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	if (argv == '\0')
	{
		putchar('\n');
	}
	
	for(i = 0; i <= argc; i++)
	{
		printf("%s", argv[i]);
	}

	putchar('\n');

	return (0);
}
