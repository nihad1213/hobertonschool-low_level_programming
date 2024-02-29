#include "main.h"

/**
 * _atoi() - convert string to an integer
 * @s: string
 * Return: final Result
 */
int _atoi(char *s)
{
<<<<<<< HEAD
	int sign = 1;
	int sum = 0;
	int finalResult = 0;

	while ( *s != '\0')
=======
	int i = 0;
	int val = 0;
	int minus = -1;
	
	while(s[i] == 32 || (s[i] >= 9 && s[i] <= 13))
>>>>>>> 7a6f67019816f85d9de4d39c5af440c18681be89
	{
		s++;

		if ( *s == '-')
		{
			signs *= -1;
		}
<<<<<<< HEAD
		else if ( *s >= '0' && *s < '9')
=======

		while (s[i] >= 48 && s[i] <= 57)
>>>>>>> 7a6f67019816f85d9de4d39c5af440c18681be89
		{
			break;
		}
	}

	while (*s >= '0' && *s <= '9')
	{
		sum = sum * 10;
		sum = sum + *s - '0';
		sum++
	}
	
	if (sign == -1)
	{
		finalResult = -sum;
	}
	else
	{
		finalResult = sum	
	}

	return (finalResult);
}
