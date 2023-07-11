#include <stdlib.h>

/**
* free_grid - Frees the memory allocated for a 2D grid.
* @grid: Pointer to the 2D grid.
* @rows: Number of rows in the grid.
*
* This function frees the memory allocated for a dynamically allocated 2D grid,
* including both the row pointers and the data elements.
*/

void free_grid(int **grid, int rows)
{
if (grid == NULL)
return;

for (int i = 0; i < rows; i++)
{
if (grid[i] != NULL)
free(grid[i]);
}

free(grid);
}
