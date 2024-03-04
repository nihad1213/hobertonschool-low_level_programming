#include "main.h"
#include <stddef.h>

/**
 * _strcmp - compare 2 string
 * @s1: string 1
 * @s2: string 2
 * Return: NULL
 */
char *_strstr(char *haystack, char *needle)
{
	 int i;

	 if (*needle == 0)
	 {
	 	return (haystack);
	 }

	 while (*haystack)
	 {
	 	i = 0;

		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
					return (haystack);
				i++;
			} while (haystack[i] == needle[i]);
		}
		haystack++;
	 }

	 return (NULL);
}
