#include "main.h"
/**
 * _strcat - concatenates two strings.
 * @dest: compare parameter.
 * @src: compare parameter.
 *
 * Return: pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
	char *originalDest = dest;

	while (*dest != '\0')
		dest++;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (originalDest);
}
