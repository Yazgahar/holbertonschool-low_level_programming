#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	write(1, "abcdfghijklmnoprstuvwxyz\n", 25);
	return (0);
}

