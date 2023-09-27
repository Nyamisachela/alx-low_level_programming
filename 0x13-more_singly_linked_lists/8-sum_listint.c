#include "lists.h"

/**
 * sum_listint - Computes the total sum of data values in a linked list
 * @head: Pointer to the first node in the linked list
 *
 * Return: The sum of all data values as an integer, or 0 if the list is empty
 */
int sum_listint(listint_t *head)
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
