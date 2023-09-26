#include "lists.h"

/**
 * get_nodeint_at_index - Retrieves the node at a specific index in a linked list
 * @head: Pointer to the first node in the linked list
 * @index: Index of the node to retrieve
 *
 * Return: A pointer to the desired node, or NULL if not found
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
