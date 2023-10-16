#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	write(1, "zyxwvutsrqponmlkjihgfedcba\n", 27);
	return (0);
}
