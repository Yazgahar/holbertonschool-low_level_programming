#include "lists.h"
/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list.
 * @head: Pointer to the head of the doubly linked list.
 * @n: Int to be stored in the new node.
 *
 * Return: Pointer to the newly created node.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *last = *head;

	if (!new_node)
		return (0);

	new_node->n = n;
	new_node->next = NULL;

	if (!*head)
	{
		/** If the list is empty, make the new node the head */
		new_node->prev = NULL;
		*head = new_node;
	}
	else
	{
		/** Traverse the list to find the last node */
		while (last->next != NULL)
		{
			last = last->next;
		}
		/** Add the new node at the end */
		last->next = new_node;
		new_node->prev = last;
	}
	return (new_node);
}
