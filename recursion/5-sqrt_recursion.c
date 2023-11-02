#include "main.h"
/**
 * search_sqrt - checks for sqrt.
 * @n: compare parameter.
 * @x: compare parameter.
 *
 * Return: an int.
 */
int search_sqrt(int n, int x)
{
	if ((x * x) == n)
		return (x);
	else if ((x * x) > n)
		return (-1);
	else
		return (search_sqrt(n, x + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: compare parameter.
 *
 * Return: an int.
 */
int _sqrt_recursion(int n)
{
	return (search_sqrt(n, 0));
}
