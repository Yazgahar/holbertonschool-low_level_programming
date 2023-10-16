#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	int n;

	n = '0';
	while (n <= 57)
	{
		write(1, &n, 1);
		if (n < 57)
			write(1, ", ", 2);
		n++;
	}
	write(1, "\n", 1);
	return (0);
}
