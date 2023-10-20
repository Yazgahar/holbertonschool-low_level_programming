#include "main.h"
/**
 * print_times_table - prints the n times table
 * @n: compare parameter
 *
 * Return: void.
 */
void print_times_table(int n)
{
	int i;
	int j;
	int r;

	i = 0;
	if (n >= 0 && n <= 15)
	{
		while (i <= n)
		{
			j = 0;
			while (j <= n)
			{
				r = i * j;
				if (r >= 100)
					printf(", %d", r);
				else if (r > 9 && r < 100)
					printf(",  %d", r);
				else
				{
					if (j != 0)
					{
						printf(",   ");
					}
					printf("%d", r);
				}
				j++;
			}
			printf("\n");
			i++;
		}
	}
}

