#include "main.h"
/**
 * _puts_recursion - prints a string, followed by a new line.
 * @s: a string of char.
 *
 * Return: a string of char.
 */
void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(s[i]);
	_puts_recursion(s + 1);
}
