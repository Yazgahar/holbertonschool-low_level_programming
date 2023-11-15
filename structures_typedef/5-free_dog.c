#include "dog.h"
/**
 * free_dog - frees memory allocated with malloc
 * @d: compare parameter
 */
void free_dog(dog_t *d)
{
	if (d == 0)
		return;
	if (d->name)
		free(d->name);
	if (d->owner)
		free(d->owner);
	free(d);
}
