/* strncpy.c */
#include <stddef.h>

char *strncpy(char *dest, const char *src, size_t n)
{
    char *p = dest;
    while (*src && n--)
        *p++ = *src++;
    while (n--)
        *p++ = '\0';
    return dest;
}

