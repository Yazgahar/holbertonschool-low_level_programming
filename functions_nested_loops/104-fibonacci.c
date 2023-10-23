#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long long a = 1, b = 2, next;
	int count = 2;

	printf("%llu, %llu, ", a, b);

	while (count < 98)
	{
		next = a + b;
		printf("%llu", next);
		if (count != 97)
			printf(", ");
		a = b;
		b = next;
		count++;
	}
	printf("\n");
	return (0);
}
