#include <stdio.h>

/**
 * main - entry point
 * Purpose: Prints the name of the file it was compiled from
 * Return: 0(Success)
 */
int main(void)
{
	printf("The name of the file it is printed from is: %s\n", __FILE__);
	return (0);
}
