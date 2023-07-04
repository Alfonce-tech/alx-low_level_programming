#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* free_grid - entry point
* @grid: input
* @height: input
* Description: ..
* Return: .
 */
void free_grid(int **grid, int height)
{
int j;
for (j = 0; j < height; j++)
{
free(grid[j]);
}
free(grid);
}
