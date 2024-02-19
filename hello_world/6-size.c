/*
 *File Name: 6-size.c
 *Author: Nihad Namatli
*/


#include <stdio.h>

/**
 * main - Prints the size of various types based on
 *        the computer it is compiled and run on..
 *
 * Return: Always 0.
 */

int main(void)
{
  printf("Size of char: %zu\n", sizeof(char));
  printf("Size of int: %zu\n", sizeof(int));
  printf("Size of long int: %zu", sizeof(long int));
  printf("Size of long long int: %zu", sizeof(long long int));
  printf("Size of float: %zu", sizeof(float));
  return(0);
}
