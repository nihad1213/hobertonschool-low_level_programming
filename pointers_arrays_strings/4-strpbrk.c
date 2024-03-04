#include "main.h"`

/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: character
 * Return: Null
 */
char *_strchr(char *s, char c)
{
	while (*s && *s != c)
	{
		++s;
	}
	if (c == *s)
	{
		return ((char *)s);
	}
	else
	{
		return (NULL);
	}
}

/**
 * -strpbrk - searches string got any of a set
 *  of bytes
 *  @s: string 1
 *  @acceopt: character
 *  Return: byte or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	if (s == NULL || accept == NULL)
	{
		return (NULL);
	}

	while (*s)
	{
		if(_strchr(accept, *s))
		{
			return (s);
		}
		else
		{
			s++;
		}
	}

	return (NULL);
}
