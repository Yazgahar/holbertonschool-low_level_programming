#include "main.h"
/**
 * jack_bauer - print every minute of the day
 *
 * Return: 1 or 0.
 */
void jack_bauer(void)
{
	int a;
	int b;

	a = 0;
	while (a <= 23)
	{
		b = 0;
		while (b <= 59)
		{
			putchar(a / 10 + '0');
			putchar(a % 10 + '0');
			putchar(':');
			putchar(b / 10 + '0');
			putchar(b % 10 + '0');
			putchar(' ');
			b++;
		}
		a++;
	}
}
