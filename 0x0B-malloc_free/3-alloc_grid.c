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

	grid = malloc(col * sizeof(*grid));

	if (row < 1 || col < 1 || grid == 0)
		return (NULL);

	for (i = 0; i < row; i++)
	{
		grid[i] = calloc(row, sizeof(**grid));
		if (grid[i] == NULL)
		{
			while (i--)
				free(grid[i]);
			free(grid);
			return (NULL);
		}
	}

	return (grid);
}
