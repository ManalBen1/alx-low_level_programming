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
if (size == 0)
return NULL;

char *array = NULL ;
array= malloc(sizeof(char) * size);
if (array == NULL)
return NULL;

unsigned int i;
for (i = 0; i < size; i++)
array[i] = c;

return array;
}
