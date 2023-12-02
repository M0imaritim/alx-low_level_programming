#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

/**
 * print_error - Print error message to stderr and exit with status code 98.
 * @message: The error message.
 */
void print_error(const char *message)
{
	fprintf(stderr, "%s\n", message);
	exit(98);
}

/**
 * print_elf_header_info - Print information from the ELF header.
 * @elf_header: Pointer to the ELF header structure.
 */
void print_elf_header_info(Elf64_Ehdr *elf_header)
{
	int i;

	printf("ELF Header:\n");
	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
		printf("%02x ", elf_header->e_ident[i]);
	printf("\n");
	printf("  Class:                             %s\n", elf_header->e_ident
	       [EI_CLASS] == ELFCLASS32 ? "ELF32" : "ELF64");
	printf("  Data:                              %s\n", elf_header->e_ident
	       [EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" :
	       "2's complement, big endian");
	printf("  Version:                           %d (current)\n",
	       elf_header->e_ident[EI_VERSION]);
	printf("  OS/ABI:                            %d\n", elf_header->e_ident
	       [EI_OSABI]);
	printf("  ABI Version:                       %d\n", elf_header->e_ident
	       [EI_ABIVERSION]);
	printf("  Type:                              %d\n", elf_header->e_type);
	printf("  Entry point address:               %lx\n", (unsigned long)
	       elf_header->e_entry);
}

/**
 * main - Entry point of the program.
 * @argc: Argument count.
 * @argv: Argument vector.
 *
 * Return: 0 on success, or appropriate exit code on failure.
 */
int main(int argc, char *argv[])
{
	int fd;
	Elf64_Ehdr elf_header;

	if (argc != 2)
		print_error("Usage: elf_header elf_filename");

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		print_error("Error: Unable to open file");

	if (read(fd, &elf_header, sizeof(elf_header)) != sizeof(elf_header))
	{
		close(fd);
		print_error("Error: Unable to read ELF header");
	}

	if (lseek(fd, (off_t)elf_header.e_phoff, SEEK_SET) == -1)
	{
		close(fd);
		print_error("Error: Unable to seek to program header table");
	}

	print_elf_header_info(&elf_header);

	close(fd);

	return (0);
}
