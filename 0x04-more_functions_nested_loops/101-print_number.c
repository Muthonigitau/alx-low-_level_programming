#include "main.h"

/**
 * print_number - print an integer
 * @var: the integer to be printed
 *
 * Created by: Sanctus-Peter
 * cc: 7th july, 2022
 */

void print_number(int var)
{
	if (var < 0)
	{
		_putchar('-');
		var = -var;
	}
	
	if (var / 10)
		print_number(var / 10);
	_putchar(var % 10 + '0');
}
