#include "main.h"
/**
 * free_grid - frees a 2 dimensional array of int.
 * @grid: compare parameter.
 * @height: compare parameter.
 *
 * Return: nothing.
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
