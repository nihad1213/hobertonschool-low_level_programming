#include "main.h"
#include <stdlib.h>

/**
 * _strlen - give length of string
 * @str: string
 * Return: length
 */
int _strlen(char str)
{
	int length = 0;
	while (str != '\0')
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
	char *p;
       	char *q;
        char *result;
	
	result = q = malloc(_strlen(s1) + _strlen(s2) + 1);
	for (p = s1; (*q = *p) != '\0'; ++p, ++q){}
	for (p = s2; (*q = *p) != '\0'; ++p, ++q){}
	return (result);
}
