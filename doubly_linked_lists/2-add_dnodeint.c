#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of a dlistint list.
 * @head: Pointer to the head of the doubly linked list.
 * @n: Int to be stored in the new node.
 *
 * Return: Pointer to the newly created node.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
		return (0);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;
	if (*head)
		(*head)->prev = new_node;
	*head = new_node;
	return (new_node);
}
