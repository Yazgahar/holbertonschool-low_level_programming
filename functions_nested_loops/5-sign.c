#include "main.h"
/**
 * print_sign - print - or +
 * @n: compare parameter
 *
 * Return: 1 or 0.
 */
int print_sign(int n)
{
	int n1;

	n1 = 0;
	if (n > n1)
	{
		_putchar('+');
		return (1);
	}
	else if (n == n1)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
