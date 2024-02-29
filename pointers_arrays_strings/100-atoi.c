#include "main.h"

/**
 * _atoi() - convert string to an integer
 * @s: string
 * Return: number
 */
int _atoi(char *s)
{
	int i = 0;
	
	while(s[i] == '32' || (s[i] >= '9' && s[i] <= '13'))
	{
		i++;
		int minus = 1;

		if (s[i] == '-')
		{
			minus = -1;
			i++;
		}

		int val = 0;

		while (s[i] >= '48' && s[i] <= '57')
		{
			val = val * 10 + (s[i] - '0');
			i++;
		}

		return (val * minus);
	}
}
