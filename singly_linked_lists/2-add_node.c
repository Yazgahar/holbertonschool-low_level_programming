#include "lists.h"
/**
 * add_node - Adds a new node at the beginning of a list_t list.
 * @head: Pointer to the head of the linked list.
 * @str: String to be stored in the new node.
 *
 * Return: Pointer to the newly created node.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	if (str == NULL)
		return (0);

	if (new_node == NULL)
		return (0);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (0);
	}

	new_node->len = strlen(str);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}

