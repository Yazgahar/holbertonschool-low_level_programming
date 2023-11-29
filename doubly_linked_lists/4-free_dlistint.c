#include "lists.h"
/**
 * free_dlistint - Frees a dlistint_t doubly linked list.
 * @head: Pointer to the head of the doubly linked list.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	dlistint_t *next;

	while (current)
	{
		/** Save the next pointer before freeing the current node */
		next = current->next;

		/** Free the current node */
		free(current);

		/** Move to the next node */
		current = next;
	}
}
