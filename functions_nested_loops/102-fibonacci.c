#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	long int a = 1, b = 2, next;
	int count = 2;

	printf("%ld, %ld, ", a, b);

	while (count < 50)
	{
		next = a + b;
		printf("%ld", next);
		if (count != 49)
			printf(", ");
		a = b;
		b = next;
		count++;
	}
	printf("\n");
	return (0);
}

