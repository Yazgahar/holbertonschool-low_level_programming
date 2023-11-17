#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - function that prints number
 * @separator: a string
 * @n: number of parameters
 * @...: all the parameters
 * Return: nothing
 **/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		if (separator == NULL || i == (n - 1))
			separator = "";
		printf("%d%s", va_arg(list, int), separator);
	}
	va_end(list);
	printf("\n");
}
