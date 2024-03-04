#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string 1
 * @needle: string 2
 * Return: NULL
 */
char *_strstr(char *haystack, char *needle)
{
	static char *ptr;
	ptr = haystack;

	while (*ptr)
	{
		if(strncmp(ptr, needle, strlen(needle)) == 0)
			return (ptr);
		ptr++;
	}
	return (NULL);
}
