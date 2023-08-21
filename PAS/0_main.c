#include <stdio.h>

/**
 * main -deteemine sizez of char, int and float
 * Return: 0
 */
int main(void)
{
	int n; 

	printf("size of char is: %lu bytes\n", sizeof(char));
	printf("size of int is: %lu bytes\n", sizeof(int));
	printf("size of float is: %lu bytes\n", sizeof(float));
	return 0;
}
