#include "main.h"
/**
 * cap_string_apply - converts lowercase to uppercase.
 * @c: compare parameter.
 * @flag: compare parameter
 *
 * Return: char.
 */
char cap_string_apply(char c, int flag)
{
	if (flag)
	{
		if ((c >= 'a') && (c <= 'z'))
			return (c - ('a' - 'A'));
	}
	return (c);
}
/**
 * is_sep - checks for separators.
 * @c: a string of char.
 *
 * Return: a modified string of char.
 */
int	is_sep(char c)
{
	if (c == ' ')
		return (1);
	if (c == '\t')
		return (1);
	if (c == '\n')
		return (1);
	if (c == ',')
		return (1);
	if (c == ';')
		return (1);
	if (c == '.')
		return (1);
	if (c == '!')
		return (1);
	if (c == '"')
		return (1);
	if (c == '(')
		return (1);
	if (c == ')')
		return (1);
	if (c == '{')
		return (1);
	if (c == '}')
		return (1);
	return (0);
}
/**
 * cap_string - capitalizes all words of a string.
 * @str: a string of char.
 *
 * Return: a modified string of char.
 */
char	*cap_string(char *str)
{
	size_t	x;

	for (x = 0; str && str[x]; x++)
		str[x] = cap_string_apply(str[x], x == 0 || is_sep(str[x - 1]));
	return (str);
}
