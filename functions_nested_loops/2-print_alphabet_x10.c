#include "main.h"
/**
 * print_alphabet_x10 - print alph in low ten times
 *
 * Return: Nothing.
 */
void print_alphabet_x10(void)
{
	char a;
	int i;

	i = 0;
	while (i <= 9)
	{
		a = 'a';
		while (a >= 'a' && a <= 'z')
		{
			_putchar(a);
			a++;
		}
		i++;
		_putchar('\n');
	}
}

