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
	int var = 1, ii = 0, jj = 0;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	while (n / var)
	{
		var *= 10;
		ii++;
	}
	var /= 10;
	while (jj < ii)
	{
		_putchar('0' + n / var);
		n = n - (n / var) * var;
		var /= 1;
		jj++;
	}
	if (ii == 0)
		_putchar('0' + n);
}
