#include <stdio.h>

/**
* binary_to_uint - converts a binary number to an unsigned int.
* @b: Pointer to a string of 0 and 1 chars
*Return: the converted number, or 0 if
*there is one or more chars in the string b that is not 0 or 1
*b is NULL.
*/

unsigned int binary_to_uint(const char *b);

/**
* print_binary - prints the binary representation of a number.
* @n : number for which you want to print the binary representation
*/

void print_binary(unsigned long int n);
