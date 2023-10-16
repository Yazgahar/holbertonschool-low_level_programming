#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	int a;
	int b;

	a = '0';
	b = '1';
	while (a <= '8' && a < b)
	{
		while (b <= '9')
		{
			write(1, &a, 1);
			write(1, &b, 1);
			if (a != '8' || b != '9')
				write(1, ", ", 1);
			b++;
		}
		a++;
		b = a + 1;
	}
	write(1, "\n", 1);
	return (0);
}

