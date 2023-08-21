#include "main.h"

/**
 * print_rev -  prints a string, in reverse, followed by a new line.
 * @s: string to be printed
 * Return - string printed in reverse
 */
void print_rev(char *s)
{
	int length = 0;
	int i;

	while (*s != '\0')
	{
		s++;
		length++;
	}
	s--;
	for (i = length; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
