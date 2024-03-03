#include "main.h"
/**
* _strncat - concat 2 string
* @dest: dest string
* @src:src string
* @n: integer
* Return: dest
*/
char *_strcat(char *dest, char *src)
{
	int i = 0, j;
	int n = 0;

	while (dest[i] != '\0')
		i++;
	for (j = 0; j < n && src[j] != '\0'; j++, i++)
		dest[i] = src[j];
	dest[i] = '\0';
	return (dest);
}
