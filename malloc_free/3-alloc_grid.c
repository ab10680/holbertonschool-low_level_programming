#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Returns a pointer to a 2-dimensional array of integers.
 * Each element of the grid is initialized to 0.
 * @width: The width of the grid.
 * @height: The height of the grid.
 *
 * Return: A pointer to the newly allocated grid, or NULL on failure.
 * If width or height is 0 or negative, return NULL.
 */
int **alloc_grid(int width, int height)
{
int **grid;
int i, j;
if (width <= 0 || height <= 0)  /* Check for invalid dimensions */
return (NULL);
/* Allocate memory for the grid */
grid = malloc(height * sizeof(int *));
if (grid == NULL)  /* Check if allocation failed */
return (NULL);
/* Allocate memory for each row and initialize to 0 */
for (i = 0; i < height; i++)
{
grid[i] = malloc(width * sizeof(int));
if (grid[i] == NULL)  /* Check if allocation failed */
{
for (j = 0; j < i; j++)  /* Free previously allocated rows */
free(grid[j]);
free(grid);
return (NULL);
}
for (j = 0; j < width; j++)  /* Initialize elements to 0 */
{
grid[i][j] = 0;
}
}
return (grid);  /* Return the pointer to the allocated grid */
}
