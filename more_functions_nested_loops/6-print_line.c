#include "main.h"
/**
 * print_line - print a line of chars
 * @n: compare parameter
 *
 * Return: nothing.
 */
void print_line(int n)
{
	int i = 0;

	while (i < n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
