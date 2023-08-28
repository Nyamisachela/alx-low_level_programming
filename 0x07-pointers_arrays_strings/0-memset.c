#include "main.h"

/**
 * _memset - fills block of memory with specific value
 * @s: starting address
 * @b: desired value
 * @n: no.of bytes to be changed
 *
 * Return: The changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
