#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concat 2 string
 * @s1: string 1
 * @s2: string 2
 * @n: bytes
 * Return: s
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a, b, c;
	char *s;

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";
	
	a = 0;
	while (s1[a])
	{
		a++;		
	}

	s = malloc(sizeof(*s) * a + n + 1);

	if (s == NULL)
		return (NULL);

	for (b = 0, c = 0; b < (a + n); b++)
	{
		if (b < a)
		{
			s[b] = s1[b];	
		}
		else
		{
			s[b] = s2[c++];
		}
	}

	s[b] = '\0';

	return (s);

}
