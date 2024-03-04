#include "main.h"

/**
 * _strcmp - compare 2 string
 * @s1: string 1
 * @s2: string 2
 * Return: NULL
 */
int _strcmp(char *s1, char *s2)
{
	char *string1, *string2;

	while (*s1 != NULL)
	{
		if (*s1 == *s2)
		{
			string1 = s1;
			string2 = s2;

			while (*string1 && *string2)
			{
				if (*string1 != *string2)
				{
					break;
				}

				string1++;
				string2++;
				
			}

			if (*string2 == NULL)
				return (s1);
		}

		s1++;
	}

	return (NULL);
}
