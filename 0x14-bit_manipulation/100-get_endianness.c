#include "main.h"

/**
 * get_endianness - Checks the endianness of the system
 *
 * Return: 0 if the system is big endian, 1 if it is little endian
 */
int get_endianness(void)
{
	unsigned int check_endian = 1;
	char *byte_pointer = (char *)&check_endian;

	/* If the first byte (lowest address) is 1, it's little endian */
	if (*byte_pointer == 1)
		return (1); /* Little endian*/
	else
		return (0); /* Big endian*/
}
