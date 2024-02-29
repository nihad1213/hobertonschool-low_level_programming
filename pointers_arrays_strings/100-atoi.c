#include "main.h"

/**
 * _atoi() - convert string to an integer
 * @s: string
 * Return: 0
 */
int _atoi(char *s)
{
	int i;
	int num = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		num = num * 10 + (s[i] - 48);	
	}

	return (0);
}
