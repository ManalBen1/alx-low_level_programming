#include <stdlib.h>

/**
* create_array - Creates an array of chars and initializes it
*                with a specific char.
*
* @size: The size of the array.
* @c: The character to initialize the array with.
*
* Return: On success, a pointer to the created array.
*         Otherwise, NULL.
*/

char *create_array(unsigned int size, char c)
{
unsigned int i;
char *array = NULL;

if (array == NULL)

return (NULL);

array = malloc(size * sizeof(char));

if (array == NULL)

return (NULL);

for (i = 0; i < size; i++)
array[i] = c;

return (array);
}
