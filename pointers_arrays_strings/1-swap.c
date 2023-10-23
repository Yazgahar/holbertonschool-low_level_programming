#include "main.h"
/**
 * swap_int - swaps values of two integers.
 * @a: compare parameter.
 * @b: compare parameter.
 *
 * Return: void.
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
