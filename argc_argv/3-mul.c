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
	int nb1, nb2, result;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	nb1 = atoi(argv[1]);
	nb2 = atoi(argv[2]);
	result = nb1 * nb2;
	printf("%d\n", result);
	return (0);
}
