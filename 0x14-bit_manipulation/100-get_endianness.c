#include <stdio.h>
#include "main.h"
/**
* get_endianness - function that checks the endianness.
* Return: 0 if big endian, 1 if little endian.
*/

int get_endianness(void)
{
unsigned int number = 1;
char *endiannes_number = (char *)&number;
return (*endiannes_number);

if (number != 0)
{
printf("Little Endian\n");
}
else
{
printf("Big Endian\n");
}
return (0);
}
