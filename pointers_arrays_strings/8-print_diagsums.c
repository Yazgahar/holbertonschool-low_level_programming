#include "main.h"
/**
 * print_diagsums - prints the chessboard.
 * @a: array.
 * @size: compare parameter.
 *
 * Return: Nothing.
 */
void print_diagsums(int *a, int size)
{
	int i, diagsum, anti_diagsum;

	diagsum = 0;
	anti_diagsum = 0;
	for (i = 0; i < size; i++)
	{
		diagsum += a[i][i];
		anti_diagsum += a[i][size - 1 - i];
	}
	printf("%d, %d\n", diagsum, anti_diagsum);
}
