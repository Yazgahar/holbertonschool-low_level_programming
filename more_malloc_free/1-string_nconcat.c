#include "main.h"
/**
 * _strlen - returns the length of a string.
 * @s: compare parameter.
 *
 * Return: int.
 */
unsigned int _strlen(char *s)
{
	unsigned int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
/**
 * string_nconcat - function that concatenates two strings
 * @s1: compare parameter
 * @s2: compare parameter
 * @n: number of first bytes of s2
 * Return: char
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";
	i = _strlen(s1);
	if (s2 == NULL)
		s2 = "";
	j = _strlen(s2);
	s = (char *) malloc(sizeof(char) * (i + n) + 1);
	if (s == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		s[i] = s1[i];
	for (j = 0; s2[j] != '\0' && j < n; j++)
		s[i + j] = s2[j];
	s[j + i] = '\0';
	return (s);
}

