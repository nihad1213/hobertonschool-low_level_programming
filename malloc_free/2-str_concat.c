#include "main.h"
#include <stdlib.h>

/**
 * _strlen - return length of string
 * @s: string
 * Return: void
 */
int _strlen(char *s)
{
	int length = 0;

	while (*(length + s) != '\0')
	{
		length++;
	}

	return (length);
}

/**
 * str_concat - concatenates 2 string
 * @s1: string 1
 * @s2: string 2
 * Return: NULL on failure
 */
char *str_concat(char *s1, char *s2)
{

	char *p, *q, *result;
	
	if (s1 == 0)
		s1 = " ";
	if (s2 == 0)
		s2 = " ";
	
	result = q = malloc(_strlen(s1) + _strlen(s2) + 1);
  	for (p = s1; (*q = *p) != '\0'; ++p, ++q) {}
  	for (p = s2; (*q = *p) != '\0'; ++p, ++q) {}
  	return result;	
}
