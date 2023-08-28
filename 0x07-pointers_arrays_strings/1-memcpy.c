#include "main.h"

/**
 *_memcpy - fx that copies memory area
 *@dest: mem storage
 *@src: mem source
 *@n: num of bytes
 *
 *Return: The copied memory with n bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
