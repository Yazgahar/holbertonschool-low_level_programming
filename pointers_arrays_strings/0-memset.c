#include "main.h"
/**
 * _memset - fills memory with constant byte.
 * @s: compare parameter.
 * @b: compare parameter.
 * @n: compare parameter.
 *
 * Return: char.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	if (s == 0)
		return (0);
	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
