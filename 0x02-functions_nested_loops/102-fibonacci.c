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
	long long result;

	printf("%d, %d, ", n1,n2);
	for (ii = 2; ii <= nLast + 1; ii++)
	{
		result = n1 + n2;
		n1 = n2;
		n2 = result;
		printf("%lld", result);
		if (ii != nLast + 1)
			printf(", ");
	}
	printf("\n");
}
