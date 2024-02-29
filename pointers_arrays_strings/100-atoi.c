#include "main.h"

/**
 * _atoi() - convert string to an integer
 * @s: string
 * Return: final Result
 */
int _atoi(char *s)
{
	int sign = 1;
	int sum = 0;
	int finalResult = 0;

	for (; *s != '\0'; s++)
	{
		if (*s == '-')
		{
			sign *= -1;
		}
		else if (*s >= '0' && *s < '9')
		{
			break;
		}
	}

	while (*s >= '0' && *s <= '9')
	{
		sum = sum * 10;
		sum = sum + *s - '0';
		sum++;
	}
	
	if (sign == -1)
	{
		finalResult = -sum;
	}
	else
	{
		finalResult = sum;	
	}

	return (finalResult);
}
