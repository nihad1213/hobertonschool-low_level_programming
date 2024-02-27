#include "main.h"
/**
 * print_rev - print string in reverse
 * @s: string
 * Return: void
 */
void rev_string(char *s)
{
	int i = 0;
	int k;
	int len, j;
	int tmp;

	while (s[i] != '\0')
	{
		i++;
	}
	k = 0;
	len = i;
	i--;

	while (k < len / 2)
	{
		tmp = s[k];
		s[k] = s[i];
		s[i] = tmp;
		i--;
		k++;
	}
}
