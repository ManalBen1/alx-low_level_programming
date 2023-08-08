#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* create_file - Creats a file and writes content into it.
* @filename:is the name of the file to create.
* @text_content: is a NULL terminated string to write to the file.
*
* Return: returns 1 on success,and returns -1 on failure.
* Description :The created file must have those permissions: rw-------.
* If the file already exists, do not change the permissions.
* If the file already exists, truncate it.
* If filename is NULL return -1.
* If text_content is NULL create an empty file.
*/
int create_file(const char *filename, char *text_content)
{
FILE *file;
size_t len = 0;
size_t written = 0;


if (filename == NULL)

return (-1);

file = fopen(filename, "w");
if (file == NULL)

return (-1);


if (text_content != NULL)
{
while (text_content[len] != '\0')
len = len + 1;
written = fwrite(text_content, sizeof(char), len, file);

if (written != len)
fclose(file);
return (1);
}
fclose(file);
if (chmod(filename, S_IRUSR | S_IWUSR) != 0)
return (-1);


return (1);
}
