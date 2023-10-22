#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	long int a = 1, b = 2, next;
	int count = 2, getEven = 2;

	while (count < 32)
	{
		next = a + b;
		if ((next % 2) == 0)
			getEven = getEven + next;
		a = b;
		b = next;
		count++;
	}
	printf("%d", getEven);
	printf("\n");
	return (0);
}
