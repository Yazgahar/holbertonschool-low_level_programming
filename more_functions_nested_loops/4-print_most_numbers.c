#include "main.h"
/**
 * print_most_numbers - print digits except 2 and 4.
 *
 * Return: Nothing.
 */
void print_most_numbers(void)
{
	char i;

	i = '0';
	while (i <= '9')
	{
		if (i != '2' && i != '4')
			_putchar(i);
		i++;
	}
	_putchar('\n');
}
