#include "main.h"

/**
 * _atoi() - convert string to an integer
 * @s: string
 * Return: final Result
 */
int _atoi(char *s)
{
	int bool;
	int i, sign, result;

	i = sign = result = bool = 0;
	sign = -1;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;

		if (s[i] >= '0' && s[i] <= '9')
		{
			result *= 10;
			result -= (s[i] - '0');
			bool = 1;
		}
		else if (bool == 1)
			break;
		i++;
	}
	result *= sign;
	return (result);
}
