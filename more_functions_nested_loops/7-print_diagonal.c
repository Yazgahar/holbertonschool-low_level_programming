#include "main.h"
/**
 * print_diagonal - draws diag
 * @n: compare parameter
 *
 * Return: void.
 */
void print_diagonal(int n)
{
	int i = 0;
	int sp;

	if (n > 0)
	{
		while (i < n)
		{
			for (sp = 0; sp < i; sp++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
			i++;
		}
	}
	else
		_putchar('\n');
}
