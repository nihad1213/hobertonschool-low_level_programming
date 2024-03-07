#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplirs 2 number
 * @argc: number of arguments
 * @argv: list arguments
 * Return: 1 if there is no 2 argument
 * otherwise return 1
 */
int main(int argc, char *argv[])
{
	
	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", *argv[1] * *argv[2]);

	return (0);

}
