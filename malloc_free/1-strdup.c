#include "main.h"
/**
 * _strcpy - copies a string.
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
	dest[i] = '\0';
	return (dest);
}
/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: a string of char.
 *
 * Return: char.
 */
char *_strdup(char *str)
{
	char *newstr;
	int i;

	if (str == 0)
		return (0);
	i = 0;
	while (str[i] != '\0')
		i++;
	newstr = (char *) malloc((i + 1) * sizeof(char));
	if (newstr == 0)
		return (0);
	_strcpy(newstr, str);
	return (newstr);
}
