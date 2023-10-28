#include "main.h"
/**
 * _memcpy - copies memory area.
 * @dest: compare parameter.
 * @src: compare parameter.
 * @n: compare parameter.
 *
 * Return: char.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
		unsigned int i;

		for (i = 0; i < n; i++)
			dest[i] = src[i];
		return (dest);
}
