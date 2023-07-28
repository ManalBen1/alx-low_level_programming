#include <stdio.h>
/**
* print_before_main - Function that prints a message before main is executed.
* print_before_main -  Function that runs something before main is executed.
*/
void print_before_main(void) __attribute__((constructor));
void print_before_main(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}
