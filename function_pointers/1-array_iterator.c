#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 * @array: an array of int
 * @size: the size of the string
 * @action: the function pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == 0 || size == 0 || action == 0)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
