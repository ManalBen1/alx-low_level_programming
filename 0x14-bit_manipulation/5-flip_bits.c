#include <stdio.h>
#include "main.h"

/**
* flip_bits - function that returns the number of bits you would need to flip.
* to get from one number to another.
* @n: unsigned long int.
* @m: unsigned long int.
* Return: the number of bits you would need to flip
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int xor = n ^ m;
unsigned  int i = 0;
while (xor > 0)
{
if (xor > 0)
i += xor & 1;
xor >>= 1;
}
return (i);
}
