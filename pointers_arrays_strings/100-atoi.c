#include "main.h"
/**
 * _atoi - converts a string to an integer.
 * @s: compare parameter.
 *
 * Return: int.
 */
int _atoi(char *s)
{
	int res = 0;
	short sign = 0;

	while (!(*s >= '0' && *s <= '9'))
	{
		if (*s == '-')
			sign += 1;
		s++;
	}
	while (*s >= '0' && *s <= '9')
	{
		res = res * 10 + *s - '0';
		s++;
	}
	if (sign % 2 == 0)
		return (res);
	else
		return (res * -1);
}
