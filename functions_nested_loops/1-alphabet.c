#include "main.h"
void print_alphabet(void)
{
	char a;

	a = 'a';
	while (a >= 'a' && a <= 'z')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
