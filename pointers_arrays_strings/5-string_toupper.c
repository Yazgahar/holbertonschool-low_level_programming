#include "main.h"
/**
 * string_toupper - changes all lowercase in uppercase
 * @str: a string of char.
 *
 * Return: a modified string of char.
 */
char *string_toupper(char *str)
{
	char *originalStr = str;
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] -= 32;
		i++;
	}
	return (originalStr);
}
