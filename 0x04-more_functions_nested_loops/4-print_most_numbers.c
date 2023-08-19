#include "main.h"

/**
 * print_most_numbers - this function prints numbers 0 to 9 but skips 2 and 4
 * Return: Returns numbers 01356789
 */
void print_most_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i == '2' || i == 4)
			;
		else
			_putchar(i);
	}
	_putchar('\n');
	return (0);
}
