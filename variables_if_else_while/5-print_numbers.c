#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	write(1, "0123456789\n", 11);
	return (0);
}

