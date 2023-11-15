#include <stdio.h>
#include <stdlib.h>
#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Short description
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Name of the owner
 *
 * Description: Longer description
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

#endif
