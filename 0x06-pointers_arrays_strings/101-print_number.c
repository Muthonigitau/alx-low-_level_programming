#include "main.h"

/**
 * print_number - prints an integer.
 * @n: integer
 * 
 */

void print_number(int n)
{
	unsigned int n1;
	int divisor = 1, i, resp;

	if (n < 0)
	{
		_putchar('-');
		n1 = -n;
	}

	n1 = n;

	for (i = 0; n1 / divisor > 9; i++, divisor *= 10);

	for (; divisor >= 1; n1 %= divisor, divisor /= 10)
	{
		resp = n1 / divisor;
		_putchar('0' + resp);

	}
}
