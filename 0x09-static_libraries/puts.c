/* puts.c */
#include <stdio.h>

int puts(const char *s)
{
    return fputs(s, stdout) != EOF ? putchar('\n') : EOF;
}

