#include "main.h"

/**
 * main - this program prints _putchar
 *
 * created : Sanctus-Peter
 * cc: 5 july, 2022
 *
 * Return: (0) if successful
 */

int main(void)
{
	char var[] = "_putchar";
	int ii = 0;

	while (ii != '\0')
	{
		_putchar(var[ii]);
		ii++;
	}
		_putchar('\n');

	return (0);
}
