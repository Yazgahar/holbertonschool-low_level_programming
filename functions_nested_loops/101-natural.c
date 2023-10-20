#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int i, add;

	i = 0;
	add = 0;
	while (i < 1024)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			add = add + i;
		i++;
	}
	printf("%d\n", add);
	return (0);
}
