#include "main.c"

/**
  *main - print number from 0 to 98
  *
  *return - n
  */
void print_to_98(int n)
{
  int n;

  for(n = 0; n < 98; n++)
  {
    _putchar(n + '0');
  }

  return(n);
}
