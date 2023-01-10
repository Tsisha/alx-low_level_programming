#include "main.h"
/**
 * free_grid - frees a 2dimensional grid
 *@grid:width of grid
 *@height:height of the array
 *Return:returns void
 */
void free_grid(int **grid, int height)
{
int x;
for (x = 0; x < height; x++)
free(grid[x]);
free(grid);
}
