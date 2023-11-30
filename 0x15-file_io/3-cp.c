#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#define BUFFER_SIZE 1024

/**
* print_error - This function prints an error message to the standard error
* output and exits the program with the specified error code.
*@errcode: The error code to exit the program with.
*@msg: The error message to be displayed.
*@arg: Additional argument to be displayed with the error message.
*/

void print_error(int errcode, const char *msg, const char *arg)
{
dprintf(STDERR_FILENO, "%s: %s\n", msg, arg);
exit(errcode);
}

/**
* copy_file - This function copies the contents of one file to another file.
*@file_from: The name of the source file to read from.
*@file_to: The name of the destination file to write to.
*/
void copy_file(const char *file_from, const char *file_to)
{
int fd_from, fd_to;
ssize_t rd_bytes, wr_bytes;
char buffer[BUFFER_SIZE];

fd_from = open(file_from, O_RDONLY);
if (fd_from == -1)
{
print_error(98, "Error: Can't read from file", file_from);
}
fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0644);
if (fd_to == -1)
{
print_error(99, "Error: Can't write to file", file_to);
}
while ((rd_bytes = read(fd_from, buffer, BUFFER_SIZE)) > 0)
{
wr_bytes = write(fd_to, buffer, rd_bytes);
if (wr_bytes == -1 || wr_bytes != rd_bytes)
{
print_error(99, "Error: Can't write to file", file_to);
}
}
if (rd_bytes == -1)
{
print_error(98, "Error: Can't read from file", file_from);
}
if (close(fd_from) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
exit(100);
}
if (close(fd_to) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
exit(100);
}
}

/**
* main - This is the main function of the program.
*@argc: The number of command-line arguments.
*@argv: An array of strings containing the command-line arguments.
* Return: Returns 0 if the program executes successfully.
*/
int main(int argc, char *argv[])
{
if (argc != 3)
{
print_error(97, "Usage: cp file_from file_to", "");
}

copy_file(argv[1], argv[2]);
return (0);
}
