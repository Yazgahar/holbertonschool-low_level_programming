#include <stdio.h>
#include <stdlib.h>
/**
 * non_digit_check - check for a non digit char in the string
 * @str: the string
 *
 * Return: 1 if the char is a non digit, else 0.
 */
int non_digit_check(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (1);
	}
	return (0);
}
/**
 * main - check the code
 * @argc: count of the arguments
 * @argv: an array of strings
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int i, nb, result;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	result = 0;
	for (i = 1; i < argc; i++)
		if (non_digit_check(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
	for (i = 1; i < argc; i++)
	{
		nb =  atoi(argv[i]);
		if (nb >= 0)
			result += nb;
	}
	printf("%d\n", result);
	return (0);
}
