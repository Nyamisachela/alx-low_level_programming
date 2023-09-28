#include "main.h"

/**
 * flip_bits - Counts the number of bits needed to flip to get from n to m
 * @n: The first unsigned long int number
 * @m: The second unsigned long int number
 *
 * Return: The number of bits needed to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m; /* XOR the two numbers*/
	unsigned int count = 0;

	while (xor_result != 0)
	{
		/* Use bitwise AND to count the set bits (1s) */

		count += xor_result & 1;
		/* Right shift the result to check the next bit */
		xor_result >>= 1;
	}
	return (count);
}
