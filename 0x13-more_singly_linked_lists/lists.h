#ifndef lists.h
#define lists.h
#include <stdio.h>
#include <stdlib.h> 

/**
 * struct lists - prints all the elements of a listint_t list.
 * @n - integer
 * @next - points to the next node in the list.
 */
typedef struct lists
{
	int i;
	struct lists *next;
} listint_t


size_t print_listint(const listint_t *h);

#endif
