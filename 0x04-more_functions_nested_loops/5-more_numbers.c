#include "main.h"

/**
 * more_numbers - print numbers up to 14
 *
 * Created by: Sanctus-Peter
 * cc: 7th july, 2022
 */

void more_numbers(void)
{
	int jj = 0;

	while (jj < 10)
	{
		int ii = 0;

		do {
			if (ii < 10)
				_putchar(ii + '0');
			else
			{
				_putchar((ii / 10) + '0');
				_putchar((ii % 10) + '0');
			}

			ii++;
		} while (ii < 15);

		jj++;
		_putchar('\n');
	}
}
