#include "hash_tables.h"

/**
 * hash_table_create - create a hash table
 * @size: size of the array
 * Return: pointer to the newly created hash table
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	size_t i;
	hash_table_t *hash;

	if (!size)
		return (NULL);
	hash = malloc(sizeof(hash_table_t));
	if (!hash)
		return (0);
	hash->size = size;
	hash->array = malloc(sizeof(hash_table_t *) * size);
	if (!hash->array)
		return (0);
	for (i = 0; i < size; i++)
		hash->array[i] = NULL;
	return (hash);
}
