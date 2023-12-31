#include "main.h"
/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: compare parameter
 *
 * Return: 1 or 0.
 */
void print_to_98(int n)
{
	while (n > 98)
	{
		printf("%d", n);
		if (n != 98)
			printf(", ");
		n--;
	}
	if (n < 98)
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");
			n++;
		}
	}
	else
		printf("98");
	printf("\n");
}
