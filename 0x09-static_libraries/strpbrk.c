#include <stddef.h>

char *strpbrk(const char *s, const char *accept)
{
    const char *p1 = s;
    const char *p2;
    while (*p1)
    {
        p2 = accept;
        while (*p2)
        {
            if (*p1 == *p2)
                return (char *)p1;
            p2++;
        }
        p1++;
    }
    return NULL;
}

