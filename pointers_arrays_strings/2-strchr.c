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

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			ocr = &(s[i]);
			return (ocr);
		}
	}
	if (s[i] == '\0')
		return (0);
	return (0);
}
