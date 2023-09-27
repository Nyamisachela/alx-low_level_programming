#include "lists.h"

/**
 * listint_len - return number of elements in linked list
 * @h: linked list to traverse
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}
