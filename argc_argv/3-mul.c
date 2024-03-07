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
	int result;
	int i;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}

	for (i = 1; i < argc; i++)
	{
		result = result * argv[i];
	}

	printf("%d\n", result);

	return(0);
}
