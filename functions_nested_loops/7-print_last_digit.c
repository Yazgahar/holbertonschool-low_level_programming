#include "main.h"
/**
 * _abs - computes absolute value of an int
 * @n: compare parameter
 *
 * Return: 1 or 0.
 */
int print_last_digit(int r)
{
	int ld;
	if (r < 0)
		r = r * -1;
	ld = r % 10;
	_putchar(ld + '0');
	return (ld);
}
