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
		diagsum += a[(size + 1) * i];
		anti_diagsum += a[(size - 1) * (i + 1)];
	}
	printf("%d, %d\n", diagsum, anti_diagsum);
}
