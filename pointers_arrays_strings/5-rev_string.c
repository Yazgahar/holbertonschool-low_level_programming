#include "main.h"
/**
 * rev_string - reverses a string.
 * @s: compare parameter.
 *
 * Return: void.
 */
void rev_string(char *s)
{
	int i, len, tmp;

	len = 0;
	while (s[len] != '\0')
		len++;
	for (i = 0; i < len / 2; i++)
	{
		tmp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = tmp;
	}
}
