#include "main.h"

/**
 * print - subfunction to print
 * @n: var
 */

void print(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n / 10)
		print(n / 10);
	_putchar(n % 10 + '0');
}

/**
 * print_number - print an integer
 * @var: the integer to be printed
 *
 * Created by: Sanctus-Peter
 * cc: 7th july, 2022
 */

void print_number(int var)
{
	print(varl);
}
