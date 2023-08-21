#include "main.h"

/**
 * reset_to_98 - updates the value it points to to 98.
 * @n: pointer to an integer
 * Return: void
 */
void reset_to_98(int *n)
{
	int i;

	i = 98;
	*n = i;
	_putchar(*n + '0');
}
