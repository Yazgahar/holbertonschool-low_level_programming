#include "dog.h"
/**
* init_dog - initialize the structure
* @d: compare parameter
* @name: name of the dog
* @age: age of the dog
* @owner: owner of the dog
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == 0)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
