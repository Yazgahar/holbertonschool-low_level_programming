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
	int coin, price;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	coin = 0;
	price = atoi(argv[1]);
	if (price < 0)
	{
		printf("0\n");
		return (0);
	}
	while (price >= 25)
	{
		price -= 25;
		coin++;
	}
	while (price >= 10)
	{
		price -= 10;
		coin++;
	}
	while (price >= 5)
	{
		price -= 5;
		coin++;
	}
	while (price >= 2)
	{
		price -= 2;
		coin++;
	}
	coin += price;
	printf("%d\n", coin);
	return (0);
}
