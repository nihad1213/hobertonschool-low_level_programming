#include "main.h"
/**
 * print_rev - print string in reverse
 * @s: string
 * Return: void
 */
void rev_string(char *s)
{
	int length = 0;
	int k;
	int i, j;
	int tmp;

	while (s[length] != '\0')
	{
		length++;
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
