#include "main.h"
/**
 * print_last_digit - print the last digit of a number
 * @r: compare parameter
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
