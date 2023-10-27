#include "main.h"
/**
 * leet - encodes a string into 1337.
 * @str: a string of char.
 *
 * Return: a modified string of char.
 */
char *leet(char *str)
{
	int i, j;
	char c_toconv[] = "aeotlAEOTL";
	char conv[] = "4307143071";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; c_toconv[j] != '\0'; j++)
		{
			if (str[i] == c_toconv[j])
				str[i] = conv[j];
		}
	}
	return (str);
}
