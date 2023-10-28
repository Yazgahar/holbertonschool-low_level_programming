#include "main.h"
/**
 * _strspn - gets the lenght of a prefix substring.
 * @s: the string to compare.
 * @accept: chars to check.
 *
 * Return: number of different chars.
 */
unsigned int _strspn(char *s, char *accept)
{
	size_t i, j;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0' && s[i] != accept[j])
			j++;
		if (accept[j] == '\0')
			return (i);
		i++;
	}
	return (i);
}
