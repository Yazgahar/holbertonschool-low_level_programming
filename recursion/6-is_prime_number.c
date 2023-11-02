#include "main.h"

/**
 * check_prime - fucntion to check for the prime number.
 *
 * @n: compare parameter.
 * @i: compare parameter.
 *
 * Return: 0 or 1
 */

int check_prime(int n, int i)
{
	if (i * i > n)
		return (1);
	else if (n % i == 0)
		return (0);
	else
		return (check_prime(n, i + 1));
}

/**
 * is_prime_number - find prime number.
 *
 * @n: compare parameter.
 *
 * Return: 0 or 1.
 */

int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	else
		return (check_prime(n, 2));
}
