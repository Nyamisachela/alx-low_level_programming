#include "main.h"

/**
 * print_most_numbers - this function prints numbers 0 to 9 but skips 2 and 4
 * Return: Returns numbers 01356789
 */
void print_most_numbers(void)
{
	int i = '0' int j = '9'

		while (i <= j)
		{
			if (i != '2' && i != '4')
				_putchar(i + '0');
			i++;
		}
	_putchar('\n');
}
