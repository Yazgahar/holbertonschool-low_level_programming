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
	ld = r % 10;
	if (ld < 0)
		ld = ld * -1;
	_putchar(ld + '0');
	return (ld);
}
