#include "main.h"
/**
 * _islower - check for lowercase
 * @c: compare parameter
 *
 * Return: 1 or 0.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
