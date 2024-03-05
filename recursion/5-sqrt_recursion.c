#include "main.h"
/**
 * _sqrt_recursion - return natural square root
 * of number
 * @n: integer
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1) {
       		return (n);
    	}
    
    	int i;
	int result;
	i = 0;
	result = 0;
    
    	while (result <= n) {
        	i++;
        	result = i * i;
    	}
    
    	return (i - 1);	
}
