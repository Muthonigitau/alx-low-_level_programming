#include <string.h>
#include "main.h"

/**
 * puts_half - print the last half of a string
 * @s: pointer to the string variable s
 *
 * Created by: Sanctus-Peter
 * cc: 12th july, 2022.
 */

void puts_half(char *s)
{
	int len = strlen(s), i;

	for (i = len / 2; i < len; i++)
		_putchar(s[i]);
	_putchar('\n');
}
