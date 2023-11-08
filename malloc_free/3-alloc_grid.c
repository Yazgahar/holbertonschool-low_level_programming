#include "main.h"
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of int.
 * @width: compare parameter.
 * @height: compare parameter.
 *
 * Return: int.
 */
int **alloc_grid(int width, int height)
{
	int **arr, i;

	if (width < 1 || height < 1)
		return (0);
	arr = (int **) malloc(sizeof(int *) * height);
	for (i = 0; i < height; i++)
	{
		arr[i] = (int *) malloc(sizeof(int) * width);
	}
	return (arr);
}
