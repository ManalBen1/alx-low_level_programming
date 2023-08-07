#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* append_text_to_file -  function that appends text at the end of a file.
* @filename: is the name of the file.
* @text_content: is the NULL terminated.
* string to add at the end of the file.
*Return: 1 on success and -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
FILE *file;
size_t len = 0;

file = fopen(filename, "a");

if (file == NULL)
{
return (-1);
}

if (filename == NULL)

return (-1);

if (text_content != NULL)
{

while (text_content[len])

len = len + 1;
}

if (text_content != NULL)
{

size_t bytes_w = fwrite(text_content, 1, len, file);

if (bytes_w < len)
{

fclose(file);
return (-1);

}
}

fclose(file);
return (1);
}

