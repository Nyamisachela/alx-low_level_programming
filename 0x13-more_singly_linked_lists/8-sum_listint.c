#include "lists.h"

/**
 * sum_listint - Computes the sum of all data values in a listint_t linked list
 * @head: Pointer to the first node in the linked list
 *
 * Return: The sum of all data values, or 0 if the list is empty
 */
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
