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
	int a, b, c, d;
	char *s;

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";

	for (a = 0; s1[a] != '\0'; a++)
	{
		;
	}

	for (b = 0; s2[b] != '\0'; b++)
	{
		;
	}

	b++;
	s = malloc(a * sizeof(*s1) + b * sizeof(*s2));

	if (s == NULL)
		return (NULL);

	for (c = 0, d = 0; c < a + b; c++)
	{
		if (c < a)
			s[c] = s1[c];
		else
			s[c] = s2[d++];
	}

	return (s);
}
}
