#include "main.h"
/**
 * _strchr - locates a character in a string.
 * @s: compare parameter.
 * @c: compare parameter.
 *
 * Return: char.
 */
char *_strchr(char *s, char c)
{
	int i;
	char *ocr;

	if (s == NULL)
		return (0);
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			ocr = &(s[i]);
			return (ocr);
		}
	}
	return (0);
}
