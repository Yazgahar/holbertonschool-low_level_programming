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
	int **arr, x, y;

	if (width < 1 || height < 1)
		return (0);
	arr = (int **) malloc(sizeof(int *) * height);
	if (arr == 0)
		return (0);
	for (y = 0; y < height; y++)
	{
		arr[y] = (int *) malloc(sizeof(int) * width);
		if (arr[y] == 0)
		{
			for (x = 0; x < y; x++)
				free(arr[x]);
			free(arr);
			return (0);
		}
		for (x = 0; x < width; x++)
			arr[y][x] = 0;
	}
	return (arr);
}
