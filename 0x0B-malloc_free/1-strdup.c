#include <stdlib.h>
#include <string.h>

char *_strdup(const char *str)
{
if (str == NULL)
return NULL;

size_t length;
length = strlen(str);

char *duplicate;
duplicate = malloc((length + 1) * sizeof(char));

if (duplicate == NULL)
return NULL;

strcpy(duplicate, str);
return duplicate;
}
