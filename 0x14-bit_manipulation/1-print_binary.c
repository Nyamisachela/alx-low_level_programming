#include <stdio.h>

/**
 * print_binary - Prints the binary representation of an unsigned long integer
 * @n: The number to be printed in binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int found_one = 0;

	while (mask > 0)
	{
		if ((n & mask) != 0)
		{
			found_one = 1;
			_putchar('1');
		}
		else if (found_one)
		{
			_putchar('0');
		}
		mask >>= 1;
	}
}
