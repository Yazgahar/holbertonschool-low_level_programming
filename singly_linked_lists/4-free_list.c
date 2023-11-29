#include "lists.h"
/**
 * free_list - Frees a list_t linked list.
 * @head: Pointer to the head of the linked list.
 */
void free_list(list_t *head)
{
	list_t *current = head;
	list_t *next;

	while (current)
	{
		/** Save the next pointer before freeing the current node */
		next = current->next;

		/** Free the string inside the node */
		free(current->str);

		/** Free the current node */
		free(current);

		/** Move to the next node */
		current = next;
	}
}

