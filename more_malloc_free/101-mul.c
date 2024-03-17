#include "main.h"
#include <stdlib.h>
/**
 * multiply - Function to multiply two integers
 * @num1: First integer
 * @num2: Second integer
 * Return: Result of multiplication
 */
int multiply(int num1, int num2)
{
    return num1 * num2;
}

/**
 * is_valid_input - Function to check if input strings are valid integers
 * @num1: First string
 * @num2: Second string
 * Return: 1 if valid, 0 if not
 */
int _isdigit(char *argv)
{
	int i;

	i = 0;
	while (argv[i])
	{
		if (argv[i] >= '0' && argv[i] <= '9')
			i++;
		else
			return (1);
	}
	return (0);
}

int is_valid_input(const char *num1, const char *num2)
{
    while (*num1 != '\0')
    {
        if (!_isdigit(int*(num1)))
            return 0;
        num1++;
    }
    while (*num2 != '\0')
    {
        if (!_isdigit(*num2))
            return 0;
        num2++;
    }
    return 1;
}

/**
 * main - Entry point of the program
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        printf("Error\n");
        return 98;
    }

    if (!is_valid_input(argv[1], argv[2]))
    {
        printf("Error\n");
        return 98;
    }

    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);
    int result = multiply(num1, num2);
    printf("%d\n", result);

    return 0;
}
