#include <stdio.h>

/**
 * main - first 50 fibonacci number
 *
 * Created by: Sanctus-Peter
 * cc: 5th july, 2022
 *
 * Return: 0 if successful
 */
int main(void)
{
	int ii, n1 = 1, n2 = 2, nLast = 50;
	long int result;

	printf("%d, %d, ", n1,n2);
	for (ii = 2; ii < nLast; ii++)
	{
		result = n1 + n2;
		n1 = n2;
		n2 = result;
		printf("%lu", result);
		if (ii != nLast)
			printf(", ");
	}
	printf("\n");
	return (0);
}
