#include "main.h"

/**
 * _strcmp - compare 2 string
 * @s1: string 1
 * @s2: string 2
 * Return: 0
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	return (0);
}

/**
 * _strstr - locates a substring
 * @haystack: string 1
 * @needle: string 2
 * Return: NULL
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int length;
	lenght = 0;
	
	while (needle[len] != '\0')
		length++;
	while (*haystack != '\0')
	{
		if (_strcmp(haystack, needle, len) == 0)
			return (haystack);
		haystack++;
	}
	return (NULL);
}
