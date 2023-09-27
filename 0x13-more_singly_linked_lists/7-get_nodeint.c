#include "lists.h"
/**
 * get_nodeint_at_index - Retrieves the node at a specified index
 * @head: Pointer to the first node in the linked list
 * @index: Index of the desired node
 *
 * Return: A pointer to the requested node, or NULL if not found
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}
