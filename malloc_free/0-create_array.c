#include "main.h"
/**
 * create_array - creates an array of char.
 * @size: compare parameter.
 * @c: compare parameter.
 *
 * Return: char.
 */
char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i;

	ar = malloc((size + 1) * sizeof(char));
	for (i = 0; i < size; i++)
		ar[i] = c;
	ar[i] = '\0';
	return (ar);
}
