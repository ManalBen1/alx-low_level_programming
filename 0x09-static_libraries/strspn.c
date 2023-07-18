#include <stddef.h>
#include <string.h>

size_t strspn(const char *s, const char *accept)
{
    const char *p = s;
    while (*p && strchr(accept, *p))
        p++;
    return p - s;
}

