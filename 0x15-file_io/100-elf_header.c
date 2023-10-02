#include <elf.h>
#include "main.h"

void print_osabi_more(Elf64_Ehdr h);

/**
 * print_magic - Prints the magic numbers of ELF.
 * @h: parameter
 */
void print_magic(Elf64_Ehdr h)
{
	int i;

	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x", h.e_ident[i]);

		if (i == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * print_class - Prints the class of ELF.
 * @h: parameter
 */
void print_class(Elf64_Ehdr h)
{
	printf("  Class:                             ");

	switch (h.e_ident[EI_CLASS])
	{
	case ELFCLASSNONE:
		printf("none");
	break;
	case ELFCLASS32:
		printf("ELF32");
	break;
	case ELFCLASS64:
		printf("ELF64");
	break;
	}
	printf("\n");
}

/**
 * print_data - Prints the data of the ELF.
 * @h: parameter
 */
void print_data(Elf64_Ehdr h)
{
	printf("  Data:                              ");

	switch (h.e_ident[EI_DATA])
	{
		case ELFDATANONE:
			printf("none");
		break;
		case ELFDATA2LSB:
			printf("2's complement, little endian");
		break;
		case ELFDATA2MSB:
			printf("2's complement, big endian");
		break;
	}
	printf("\n");
}

/**
 * print_version - Prints the version of ELF.
 * @h: parameter
 */
void print_version(Elf64_Ehdr h)
{
	printf("  Version:                           %d", h.e_ident[EI_VERSION]);

	switch (h.e_ident[EI_VERSION])
	{
		case EV_CURRENT:
			printf(" (current)\n");
		break;
		case EV_NONE:
			printf("%s", "");
		break;
		break;
	}
	printf("\n");
}

/**
 * print_osabi - Prints the osabi of the ELF.
 * @h: parameter
 */
void print_osabi(Elf64_Ehdr h)
{
	printf("  OS/ABI:                            ");

	switch (h.e_ident[EI_OSABI])
	{
	case ELFOSABI_NONE:
		printf("UNIX - System V");
		break;
	case ELFOSABI_HPUX:
		printf("UNIX - HP-UX");
		break;
	case ELFOSABI_NETBSD:
		printf("UNIX - NetBSD");
		break;
	case ELFOSABI_LINUX:
		printf("UNIX - Linux");
		break;
	case ELFOSABI_SOLARIS:
		printf("UNIX - Solaris");
		break;
	case ELFOSABI_IRIX:
		printf("UNIX - IRIX");
		break;
	case ELFOSABI_FREEBSD:
		printf("UNIX - FreeBSD");
		break;
	case ELFOSABI_TRU64:
		printf("UNIX - TRU64");
		break;
	default:
		print_osabi_more(h);
		break;
	}
}

/**
 * print_osabi_more - print osabi more to ELf
 * @h: parameter
 */

void print_osabi_more(Elf64_Ehdr h)
{
	switch (h.e_ident[EI_OSABI])
	{
		case ELFOSABI_MODESTO:
			printf("Nove11 - Modesto");
			break;
		case ELFOSABI_OPENBSD:
			printf("UNIX - OpenBSD");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standalone APP");
			break;
		case ELFOSABI_ARM:
			printf("ARM");
			break;
		default:
			printf("<unknown: %x>", h.e_ident[EI_OSABI]);
			break;
	}
}

/**
 * print_abi - Prints ABI version of an ELF.
 * @h: parameter
 */
void print_abi(Elf64_Ehdr h)
{
	printf("  ABI Version:                       %d\n",
	       h.e_ident[EI_ABIVERSION]);
}

/**
 * print_type - Prints the type of an ELF header.
 * @h: parameter
 */
void print_type(Elf64_Ehdr h)
{
	if (h.e_ident[EI_DATA] == ELFDATA2MSB)
		h.e_type >>= 8;

	printf("  Type:                              ");

	switch (h.e_type)
	{
	case ET_NONE:
		printf("NONE (None)\n");
		break;
	case ET_REL:
		printf("REL (Relocatable file)\n");
		break;
	case ET_EXEC:
		printf("EXEC (Executable file)\n");
		break;
	case ET_DYN:
		printf("DYN (Shared object file)\n");
		break;
	case ET_CORE:
		printf("CORE (Core file)\n");
		break;
	default:
		printf("<unknown: %x>\n", h.e_type);
	}
}

/**
 * print_entry - Prints the entry point of an ELF header.
 * @h: parameter
 */
void print_entry(Elf64_Ehdr h)
{
	printf("  Entry point address:               ");

	if (h.e_ident[EI_DATA] == ELFDATA2MSB)
	{
		h.e_entry = ((h.e_entry << 8) & 0xFF00FF00) |
			  ((h.e_entry >> 8) & 0xFF00FF);
		h.e_entry = (h.e_entry << 16) | (h.e_entry >> 16);
	}

	if (h.e_ident[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)h.e_entry);

	else
		printf("%#lx\n", h.e_entry);
}

/**
 * main - Displays the information contained in ELF header
 * @argc: parameter1
 * @argv: parameter2
 *
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	Elf64_Ehdr h;
	int f;
	ssize_t byte;

	if (argc != 2)
		dprintf(STDERR_FILENO, "usage: elf_header elf_filename\n"), exit(98);
	f = open(argv[1], O_RDONLY);
	if (f == -1)
		dprintf(STDERR_FILENO, "Can't open file %s\n", argv[1]), exit(98);
	byte = read(f, &h, sizeof(h));
	if (byte < 1 || byte != sizeof(h))
		dprintf(STDERR_FILENO, "Can't read from file: %s\n", argv[1]), exit(98);
	if (h.e_ident[0] == 0x7f && h.e_ident[1] == 'E' && h.e_ident[2] == 'L' &&
			h.e_ident[3] == 'F')
	{
		printf("ELF Header:\n");
	}
	else
		dprintf(STDERR_FILENO, "Not ELF file: %s\n", argv[1]), exit(98);

	print_magic(h);
	print_class(h);
	print_data(h);
	print_version(h);
	print_osabi(h);
	print_abi(h);
	print_type(h);
	print_entry(h);

	if (close(f))
		dprintf(STDERR_FILENO, "Error closing file descriptor: %d\n", f), exit(98);
	return (0);
}
