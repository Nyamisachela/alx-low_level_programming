#include "main.h"
/**
 * _memset - fill  block of memory with specific value
 * @s: starting address
 * @b: expected value
 * @n: number of bytes to be changed
 *
 * Return: changed array with a new value for  the n bytes
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
