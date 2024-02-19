#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/*
 *main - show us number is negative or not
 *
 *
 * */






int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("is positive\n", n);
	}

	if (n == 0) 
	{
		printf("is zero\n", n);
	}

	if (n < 0)
	{	
		printf("is negative\n", n);
	}
	
	return (0);
}
