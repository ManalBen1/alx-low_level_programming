#include <stdio.h>
#include <stdlib.h>

char **strtow(char *str);

int main(void)
{
    char **tab;

    tab = strtow("      ALX School         #cisfun      ");
    if (tab)
    {
        int i;
        for (i = 0; tab[i] != NULL; i++)
        {
            printf("%s\n", tab[i]);
            free(tab[i]);
        }
        free(tab);
    }
    return (0);
}


