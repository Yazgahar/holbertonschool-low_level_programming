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
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
