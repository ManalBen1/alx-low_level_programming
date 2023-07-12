#include "main.h"
#include <stddef.h>

char *_strpbrk(char *s, char *accept)
{
    while (*s != '\0')
    {
        char *a = accept;
        while (*a != '\0')
        {
            if (*s == *a)
                return s;
            a++;
        }
        s++;
    }
    return NULL;
}

