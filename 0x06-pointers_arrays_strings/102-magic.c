#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int a[5] = {98, 1988, 1989, 972, 1024};
int *p;

p = &a[2] - 2;
printf("a[2] = %d\n", *(p + 2));
return (0);
}
