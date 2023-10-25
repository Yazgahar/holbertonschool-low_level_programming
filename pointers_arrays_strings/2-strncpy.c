#include "main.h"
/**
 * _strncpy - copies a string.
 * @dest: compare parameter.
 * @src: compare parameter.
 * @n: compare parameter.
 *
 * Return: pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *originalDest = dest;

	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}
	return (originalDest);
}
