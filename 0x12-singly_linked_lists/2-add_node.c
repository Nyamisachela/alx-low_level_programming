#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds new node at  beginning of linked list
 * @head: double pointer to the list_t list
 * @str: new str to add in node
 *
 * Return:  address of the new element, NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	*head = new;

	return (*head);

