#include <stdio.h>

/**
 * main - Program prints all single digit numbers of base 10 starting from 0
 * Return: Always 0 (success)
 */
int main(void)
{
	int digit;

	for (digit = 0; digit < 10; digit++)
	{
		putchar(digit + '0');
	}
	putchar('\n');
	return (0);
}
