#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: a struct pointer.
 *
 * Return: the size of the structure.
 */

size_t print_list(const list_t *h)
{
	const list_t *current = h;
	size_t size = 0;

	if (!h)
		return (0);
	while (current)
	{
		if (current->str)
			printf("[%u] %s\n", current->len, current->str);
		else
			printf("[0] (nil)\n");
		current = current->next;
		size++;
	}
	return (size);
}
