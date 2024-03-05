#include "main.h"
/**
 * _sqrt_recursion - return natural square root
 * of number
 * @n: integer
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	int i = 0;
	int result = 0;
	
	if (n == 0 || n == 1) {
       		return (n);
    	}
    
    	while (result <= n) {
        	i++;
        	result = i * i;
    	}
    
    	return (i - 1);	
}
