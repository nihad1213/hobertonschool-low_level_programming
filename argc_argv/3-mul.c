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
	
	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	
	result = *argv[1] * *argv[2];
	result = atoi(result);
	printf("%d\n", result);

	return (0);

}
