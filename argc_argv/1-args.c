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
	int store;
	(void) argv;

	store = -1;
	while (argc--)
		store += 1;
	printf("%d\n", store);
	return (0);
}
