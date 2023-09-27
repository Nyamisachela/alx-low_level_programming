#include "lists.h"

/**
 * add_nodeint_end - Appends a new node to the end of the linked list
 * @head: Pointer to the first element in the linked list
 * @n: Data to be inserted into the new node
 *
 * Return: A pointer to the newly added node, or NULL on failure
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;

	return (new);
}
