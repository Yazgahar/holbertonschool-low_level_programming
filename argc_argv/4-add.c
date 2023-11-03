#include <stdio.h>
#include <stdlib.h>
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
	{
		nb =  atoi(argv[i]);
		if (nb >= 0)
			result += nb;
	}
	printf("%d\n", result);
	return (0);
}
