#include "main.h"
/**
 * _strcat - concatenates two strings.
 * @dest: compare parameter.
 * @src: compare parameter.
 *
 * Return: pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
	char *originalDest = dest;

	while (*dest != '\0')
		dest++;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (originalDest);
}
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
 * str_concat - concatenates two strings.
 * @s1: compare parameter.
 * @s2: compare parameter.
 *
 * Return: char.
 */
char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *res;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = 0;
	while (s1[i] != '\0')
		i++;
	j = 0;
	while (s2[j] != '\0')
		j++;
	res = malloc((i + j + 1) * sizeof(char));
	if ((i + j) == 0)
		return (0);
	_strcpy(res, s1);
	_strcat(res, s2);
	return (res);
}
