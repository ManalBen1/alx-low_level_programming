/* strncat.c */
#include <stddef.h>

char *strncat(char *dest, const char *src, size_t n)
{
    char *p = dest;
    while (*p)
        p++;
    while (*src && n--)
        *p++ = *src++;
    *p = '\0';
    return dest;
}

