#include "dog.h"
/**
 * _strcpy - copies a string
 * @dest: destination
 * @src: source
 * Return: the string copied
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
/**
 * _strlen - count the length of the string
 * @str: string to count
 * Return: the lenght of the string
 */
int _strlen(char *str)
{
	int length = 0;

	while (*str++)
		length++;
	return (length);
}
/**
* new_dog - new dog
* @name: name of the dog
* @age: age of the dog
* @owner: owner of the dog
* Return: the new dog
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);
	newDog = malloc(sizeof(dog_t));
	if (newDog == NULL)
	{
		free(newDog);
		return (NULL);
	}
	newDog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (newDog->name == NULL)
	{
		free(newDog->name);
		free(newDog);
		return (NULL);
	}
	newDog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (newDog->owner == NULL)
	{
		free(newDog->name);
		free(newDog->owner);
		free(newDog);
		return (NULL);
	}
	newDog->name = _strcpy(newDog->name, name);
	newDog->age = age;
	newDog->owner = _strcpy(newDog->owner, owner);
	return (newDog);
}
