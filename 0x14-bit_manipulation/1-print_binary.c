#include "main.h"
#include <stdio.h>
/**
 * print_binary - Prints the binary representation of an unsigned long integer
 * @n: The number to be printed in binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int found_one = 0;

	if (n == 0)
		putchar('0');
	while (mask > 0)
	{
		if ((n & mask) != 0)
		{
			found_one = 1;
			putchar('1');
		}
		else if (found_one)
		{
			putchar('0');
		}
		mask >>= 1;
	}
}
