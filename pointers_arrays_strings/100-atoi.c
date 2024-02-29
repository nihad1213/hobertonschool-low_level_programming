#include "main.h"

/**
 * _atoi() - convert string to an integer
 * @s: string
 * Return: number
 */
int _atoi(char *s)
{
	int i;
	int num = 0;
	
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[0] == '-')
		{
			num = num * (-1);
		}
		else
		{
			num = num * 10 + (s[i] - '0');
		}
	}

	return (num);
}
