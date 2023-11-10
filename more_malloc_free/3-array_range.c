#include "main.h"
/**
 * array_range - creates an array of integers
 * @min: compare parameter
 * @max: compare parameter
 * Return: int
 */
int *array_range(int min, int max)
{
	int *arr, dif, i;

	if (min > max)
		return (0);
	dif = max - min + 1;
	arr = calloc(dif, sizeof(i));
	if (arr == 0)
		return (0);
	for (i = 0; i < dif; i++)
	{
		arr[i] = min;
		min++;
	}
	return (arr);
}
