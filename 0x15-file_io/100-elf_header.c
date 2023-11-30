#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

/**
* print_error - Prints an error message to stderr and exits with status 98.
* @msg: The error message to be displayed.
*/
void print_error(const char *msg)
{
fprintf(stderr, "%s\n", msg);
exit(98);
}

/**
* display_elf_header - Displays ELF header information of the specified ELF
* file.
* @file_name: The filename of the ELF file.
*/
void display_elf_header(const char *file_name)
{
int fd;
Elf64_Ehdr elf_header;
fd = open(file_name, O_RDONLY);
if ((fd == -1))
{
print_error("Error: Cannot open file");
}
if (read(fd, &elf_header, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr))
{
print_error("Error: Cannot read ELF header");
}
if (elf_header.e_ident[EI_MAG0] != ELFMAG0 ||
elf_header.e_ident[EI_MAG1] != ELFMAG1 ||
elf_header.e_ident[EI_MAG2] != ELFMAG2 ||
elf_header.e_ident[EI_MAG3] != ELFMAG3)
{
print_error("Error: Not an ELF file");
}
printf("Magic:   %02x %02x %02x %02x\n",
elf_header.e_ident[EI_MAG0],
elf_header.e_ident[EI_MAG1],
elf_header.e_ident[EI_MAG2],
elf_header.e_ident[EI_MAG3]);
printf("Class:                             %s\n",
elf_header.e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "ELF32");
printf("Data:                              %s\n",
elf_header.e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" :
"Unknown data encoding");
printf("Version:                           %d (current)\n",
elf_header.e_ident[EI_VERSION]);
printf("OS/ABI:                            %d\n",
elf_header.e_ident[EI_OSABI]);
printf("ABI Version:                       %d\n",
elf_header.e_ident[EI_ABIVERSION]);
printf("Type:                              %s\n",
elf_header.e_type == ET_EXEC ? "EXEC (Executable file)" : "Other");
printf("Entry point address:                %#lx\n",
(unsigned long)elf_header.e_entry);
close(fd);
}

/**
* main - The entry point of the program.
* @argc: The number of arguments passed to the program.
* @argv: An array of strings containing the arguments passed to the program.
*
* Return: 0 on success, 98 for errors.
*/
int main(int argc, char *argv[])
{
if (argc != 2)
{
fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
return (98);
}
display_elf_header(argv[1]);
return (0);
}
