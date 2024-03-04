#include "main.h"

/**
 * _memcpy - copies n bytes from memory area
 * src to memory area dest
 * @dest: destiantion
 * @src: source
 * @n: bytes
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	/*typecast src and dest addresss to (char *) */
	char *typeCastSrc = (char *)src;
	char *typeCastDest = (char *)dest;
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		typeCastDest[i] = typeCastSrc[i];
	}
	return (dest);
}
