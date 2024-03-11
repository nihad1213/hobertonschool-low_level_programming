#include "main.h"
#include <stdlib.h>

char *str_concat(char *s1, char *s2)
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

	s = malloc(a * s1 + b * s2);

	if (s == NULL)
		return (NULL);
	
}
