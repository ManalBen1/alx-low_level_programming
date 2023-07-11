#include <stdio.h>
#include <stdlib.h>

int **alloc_grid(int rows, int cols);
void free_grid(int **grid, int rows);

int main(void)
{
    int **grid;
    int rows = 6;
    int cols = 4;
    int i, j;

    grid = alloc_grid(rows, cols);
    if (grid == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    /* Use the grid as needed */
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            grid[i][j] = i * cols + j;
            printf("%d ", grid[i][j]);
        }
        printf("\n");
    }

    /* Free the allocated memory */
    free_grid(grid, rows);

    return 0;
}

