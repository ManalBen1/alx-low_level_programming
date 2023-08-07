#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* read_textfile - reads a text file and prints it to the POSIX standard output.
* @letters: the number of letters it should read and print.
* @filename: name of the fileto be read.
* Returns: the actual number of letters it could read and print
* Return: 0, if the file can not be opened or read, and if filename is NULL,
* and  if write fails or does not write the expected amount of bytes.
*/

ssize_t read_textfile(const char *filename, size_t letters)
{

ssize_t bytesR;

char *buff;

FILE *file;
file = fopen(filename, "r");
buff = malloc(letters + 1);
bytesR = fread(buff, 1, letters, file);
if (bytesR < 0)
{
free(buff);

return (0);
}
if (!file)
{
return (0);
}
if (filename == NULL)
{
return (0);
}


if (buff == NULL)
{
fclose(file);

return (0);
}


fclose(file);
buff[bytesR] = '\0';
printf("%s", buff);
free(buff);

return (bytesR);
}
