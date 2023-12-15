#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* read_textfile - reads a text file and prints it to the POSIX standard output.
* @letters: the number of letters it should read and print.
* @filename: name of the fileto be read.
* Return: the actual number of letters it could read and print, and 0 if the
* file can not be opened or read, and if filename is NULL,
* and  if write fails or does not write the expected amount of bytes.
*/
ssize_t read_textfile(const char *filename, size_t letters) {
ssize_t bytesR;
char *buff;
FILE *file;

if (filename == NULL)
{
fprintf(stderr, "Filename is NULL\n");
return 0;
}
file = fopen(filename, "r");
if (!file) {
fprintf(stderr, "Could not open file\n");
return 0;
}
if (letters == 0)
{
fclose(file);
fprintf(stderr, "Zero characters requested\n");
return (0);
}
buff = malloc(letters + 1);
if (buff == NULL)
{
fclose(file);
fprintf(stderr, "Memory allocation error\n");
return (0);
}
bytesR = fread(buff, 1, letters, file);
if (bytesR < 0)
{
free(buff);
fclose(file);
fprintf(stderr, "Read error\n");
return (0);
}
if (bytesR == 0)
{
fclose(file);
fprintf(stderr, "File is empty or read error\n");
return (0);
}
fclose(file);
buff[bytesR] = '\0';
fprintf(stderr, "%s", buff);
free(buff);
return (bytesR);
}
