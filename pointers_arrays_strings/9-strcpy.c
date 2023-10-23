#include "main.h"
/**
 * _strcpy - copies string.
 * @dest: compare parameter.
 * @src: compare parameter.
 *
 * Return: void.
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
