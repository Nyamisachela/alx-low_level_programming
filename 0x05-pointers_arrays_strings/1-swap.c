#include "main.h"

/**
*swap_int - swaps the values of two integers.
*@a: interger to be swapped
*@b: integer to eb swapped
*Return: No return
*/
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
