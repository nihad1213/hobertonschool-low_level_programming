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
        int i, j;
        int (*o)(int, int);

        if (argc != 4)
        {
                printf("\nERROR");
        }

        if (argc[2][1] != '\0')
        {
                printf("\nERROR");
        }

        0 = get_op_func(argv[2]);

        if (o == NULL)
        {
                printf("\nERROR");
        }

        a = atoi(argv[1]);
        b = atoi(argv[3]);

        printf("%d\n", o(a, b));

        return (0);
}
