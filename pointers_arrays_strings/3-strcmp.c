#include "main.h"
/**
 * _strcmp - compare a string.
 * @s1: compare parameter.
 * @s2: compare parameter.
 *
 * Return: int.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	if (*s1 < *s2)
		return (*s1 - *s2);
	else if (*s1 > *s2)
		return (*s1 - *s2);
	else
		return (0);
}
