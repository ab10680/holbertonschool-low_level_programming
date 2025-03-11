#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees a 2-dimensional grid previously created by alloc_grid.
 * @grid: The grid to be freed.
 * @height: The height of the grid.
 *
 * Return: Nothing.
 */
void free_grid(int **grid, int height)
{
int i;
if (grid == NULL)  /* Check if the grid is NULL */
return;
/* Free each row of the grid */
for (i = 0; i < height; i++)
{
free(grid[i]);
}
/* Free the array of pointers */
free(grid);
}
