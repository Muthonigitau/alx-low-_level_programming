#include "main.h"

/**
 * print_number - print an integer
 * @n: the integer to be printed
 *
 * Created by: Sanctus-Peter
 * cc: 7th july, 2022
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n == 0)
		_putchar('0');

	if (n / 10)
		print_number(n / 10);
	_putchar(n % 10 + '0');
}
