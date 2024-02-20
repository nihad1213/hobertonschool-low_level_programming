#include "main.h"

/**
 * main - print last digit of number
 * 
 * Return last value
 */
int print_last_digit(int n)
{
  int lastDigit;
  lastDigit = n % 10;

  if(lastDigit < 0)
  {
    lastDigit = -1 * lastDigit;
  }

  return (lastDigit);
}
