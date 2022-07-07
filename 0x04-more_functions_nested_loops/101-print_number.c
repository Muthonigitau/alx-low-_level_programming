#include "main.h"

/**
 * print - print an integer
 * @n: the integer to be printed
 *
 * Created by: Sanctus-Peter
 * cc: 7th july, 2022
 */

void print(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n == 0)
		_putchar('0');

	if (n / 10)
		print(n / 10);
	_putchar(n % 10 + '0');
}

/**
 * print_number - print num
 * @var: var
 */
void print_number(int var)
{
	print(var);
}
