#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - function that search for an integer
 * @array: an array of int
 * @size: size of array
 * @cmp: function pointer
 *
 * Return: int
 */
int	int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == 0 || size <= 0 || cmp == 0)
		return (-1);
	for (i = 0; i < size; i++)
		if (cmp(array[i]))
			return (i);
	return (-1);
}
