#include "lists.h"
/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: Pointer to the head of the linked list.
 * @str: String to be stored in the new node.
 *
 * Return: Pointer to the newly created node.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	if (!str)
		return (0);
	if (!new_node)
		return (0);
	new_node->str = strdup(str);
	if (!new_node->str)
	{
		free(new_node);
		return (0);
	}
	new_node->len = strlen(str);
	new_node->next = 0;
	if (!*head)
		/** If the list is empty, make the new node the head */
		*head = new_node;
	else
	{
		/** Traverse the list to find the last node */
		list_t *current = *head;

		while (current->next)
		{
			current = current->next;
		}
		/** Add the new node at the end */
		current->next = new_node;
	}
	return (new_node);
}
