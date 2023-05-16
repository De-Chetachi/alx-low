#include "main.h"
#include <stdlib.h>
#include <stddef.h>


/**
* free_grid - frees a 2 dimensional grid previously
* created by your alloc_grid function
* @grid: The two dimensional array
* @height: The number of arrays
* Return: Void
*/

void	free_grid(int **grid, int height)
{
	int	i;

	for	(i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
