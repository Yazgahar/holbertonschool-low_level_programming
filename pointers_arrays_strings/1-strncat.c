#include "main.h"
/**
 * _strncat - concatenates two strings.
 * @dest: compare parameter.
 * @src: compare parameter.
 * @n: compare parameter.
 *
 * Return: pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	char *originalDest = dest;

	while (*dest != '\0')
		dest++;
	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	*dest = '\0';
	return (originalDest);
}
