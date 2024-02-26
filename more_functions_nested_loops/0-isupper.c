#include "main.h"	

/**
 * _isupper() - check character is uppercase or not
 *
 * @c - character
 * return 1 - if character uppercase
 *
 * return 0 - otherwise 
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
