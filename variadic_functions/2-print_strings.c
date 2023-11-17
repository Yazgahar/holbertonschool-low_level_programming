#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - function that prints strings
 * @separator: a string
 * @n: number of parameters
 * @...: all the parameters
 * Return: nothing
 **/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;
	char *str;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(list, char*);
		if (separator == NULL || i == (n - 1))
			separator = "";
		if (str == NULL)
			printf("(nil)%s", separator);
		else
			printf("%s%s", str, separator);
	}
	va_end(list);
	printf("\n");
}
