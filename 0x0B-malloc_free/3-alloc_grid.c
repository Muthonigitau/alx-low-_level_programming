#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - make a 2-D array dynamically
 * @col: column of the array
 * @row: row of the array
 *
 * Return: pointer to the 2-D array
 *
 * Created by: Sanctus-Peter
 * cc: 23rd July, 2022
 */

int **alloc_grid(int col, int row)
{
	int i, **grid;

	if (row < 1 || col < 1)
		return (NULL);

	grid = calloc(row, sizeof(int *));
	for (i = 0; i < row; i++)
		grid[i] = calloc(col, sizeof(int));

	if (grid == NULL)
		return (NULL);
	return (grid);
}
