#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: the string to compare.
 * @accept: chars to check.
 *
 * Return: s or null.
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	if (s == NULL || accept == NULL)
		return (NULL);
	while (*s != '\0')
	{
		i = 0;
		while (accept[i] != '\0')
		{
			if (*s == accept[i])
				return (s);
			i++;
		}
		s++;
	}

	return (NULL);
}
