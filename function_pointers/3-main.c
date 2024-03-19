#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - main
 * @argc: numner of arguments
 * @argv: list of arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	char op;
	int (*op_func)(int, int);
	int result;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	op = *(argv[2]);
	if ((op == '/' || op == '%') && !atoi(argv[3]))
	{ /* divide by zero exception */
		printf("Error\n");
		return (100);
	}

	/* actually do the operation now that we've error chcked */
	op_func = get_op_func(&op);
	if (op_func == NULL || argv[2][1] != '\0')
	{ /* didn't find operator, or operator longer than 1 byte */
		printf("Error\n");
		return (99);
	}
	result = op_func(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", result);
	return (0);
}
