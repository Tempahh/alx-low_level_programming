#include <stdlib.h>
#include <stdio.h>
/**
 * free_grid - function to free 2d array memory
 * @grid: function parameter
 * @height: function parameter
 * Return: void
*/
void free_grid(int *grid, int height)
{
for (int i = 0; i < height; i++)
{
free(grid[i]);
free(grid);
}
}
