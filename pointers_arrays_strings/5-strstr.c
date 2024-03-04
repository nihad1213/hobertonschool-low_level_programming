#include "main.h"
#include <stddef.h>

/**
 * _strstr - locate substring
 * @haystack: string 1
 * @needle: string 2
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
