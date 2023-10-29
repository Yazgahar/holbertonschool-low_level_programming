#include "main.h"
/**
 * _strstr - locates a substring.
 * @haystack: the string to compare.
 * @needle: the substring to find.
 *
 * Return: a pointer to the beginning of the substring or NULL.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}
		if (needle[j] == '\0')
			return (&haystack[i]);
	}
	return (NULL);
}
