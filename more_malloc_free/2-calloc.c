#include "main.h"
/**
 * _calloc - allocates memory for an array
 * @nmemb: compare parameter
 * @size: compare parameter
 * Return: a void pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0)
		return (0);
	if (size == 0)
		return (0);
	ptr = (void *) malloc(nmemb * size);
	if (ptr != 0)
		memset(ptr, 0, nmemb * size);
	if (ptr == 0)
		return (0);
	return (ptr);
}
