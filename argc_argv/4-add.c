#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int isNumber(const char *str)
{
	while (*str)
	{
		if (!isdigit(*str))
		{
			return (0);
		}
		str++;
	}

	return (1);
}


/**
 * main - add positive numbers
 * @argc: number of arguments
 * @argv: list arguments
 * Return: 0 if no number is passed
 * 1 if one of the number contains symbols
 * that are not digits
 */
int main(int argc, char *argv[])
{
	int i;
	int result = 0;

	for (i = 1; i < argc; i++)
	{
		if (!isNumber(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		result = result + atoi(argv[i]);
	}

	printf("%d\n", result);
	return (0);
}
