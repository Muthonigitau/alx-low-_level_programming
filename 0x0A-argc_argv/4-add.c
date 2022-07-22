#include <stdio.h>
#include <stdlib.h>

/**
 * main - add parameters passed to main
 * @argc: number of actual parameter passed to main
 * @argv: pointer to the parameter passed
 *
 * Return: 0 if success
 *
 * Created by: Sanctus-Peter
 * cc: 22nd, July 2022
 */

int main(int argc, char *argv[])
{
	int i, result = 0;

	for (i = 1; i < argc; i++)
	{
		if (*argv[i] < '0' || *argv[i] > '9')
		{
			printf("Error\n");
			exit(EXIT_FAILURE);
		}
		else
			result += atoi(argv[i]);
	}
	printf("%d\n", result);
	exit(EXIT_SUCCESS);
}
