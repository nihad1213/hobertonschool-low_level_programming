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
	int result = 1;
	int i;
	
	if (argc == 1 || argc == 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for(i = 1; i < 3; i++)
		{
			result = result * atoi(argv[i]); 
		}

		printf("%d\n", result);
	}
	return (0);

}
