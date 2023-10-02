#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

/**
 * main - Display information from the ELF header of an ELF file.
 * @argc: Number of command-line arguments.
 * @argv: Array of command-line argument strings.
 *
 * Return: 0 on success, 98 on failure.
 */
/**
 * main - Display information from the ELF header of an ELF file.
 * @argc: Number of command-line arguments.
 * @argv: Array of command-line argument strings.
 *
 * Return: 0 on success, 98 on failure.
 */
int main(int argc, char *argv[])
{
    int fd;
    Elf64_Ehdr ehdr;

    if (argc != 2)
    {
        dprintf(2, "Usage: %s elf_filename\n", argv[0]);
        exit(98);
    }

    fd = open(argv[1], O_RDONLY);
    if (fd == -1)
    {
        dprintf(2, "Error: Can't open file %s\n", argv[1]);
        exit(98);
    }

    if (read(fd, &ehdr, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr))
    {
        dprintf(2, "Error: Can't read file %s\n", argv[1]);
        close(fd);
        exit(98);
    }

    if (lseek(fd, 0, SEEK_SET) == -1)
    {
        dprintf(2, "Error: Can't seek file %s\n", argv[1]);
        close(fd);
        exit(98);
    }

    print_elf_header(&ehdr);
    close(fd);
    return (0);
}
