#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2d grid
 * @grid: pointer to pointer array
 * @height: size of the grid
 * Return: the number of free cells in the grid
*/
void free_grid(int **grid, int height)
{
int idx;
for (idx = 0; idx < height; idx++)
free(grid[idx]);
free(grid);
}
