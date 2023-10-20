#include "main.h"
/**
 * more_numbers - prints digits and numbers
 *
 * Return: nothing.
 */
void more_numbers(void)
{
	int i;
	int j = 0;

	while (j < 10)
	{
		for (i = 0; i <= 9; i++)
		{
			_putchar(i);
		}
		j++;
	}
	_putchar('\n');
}
