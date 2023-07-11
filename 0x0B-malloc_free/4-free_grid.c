#include <stdlib.h>

void free_grid(int **grid, int rows)
{
int i;

if (grid == NULL)
return;

for (i = 0; i < rows; i++)
{
free(grid[i]);
}

free(grid);
}
