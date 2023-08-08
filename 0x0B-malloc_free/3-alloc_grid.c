#include "main.h"
#include <stdlib.h>
/**
* alloc_grid - entry point
* @width: input
* @height: input
* Return: 0
*/
int **alloc_grid(int width, int height)
{
int **hii;
int w, z;
if (width <= 0 || height <= 0)
return (NULL);
hii = malloc(sizeof(int *) * height);
if (hii == NULL)
return (NULL);
for (w = 0; w < height; w++)
{
hii[w] = malloc(sizeof(int) * width);
if (hii[w] == NULL)
{
for (; w >= 0; w--)
free(hii[w]);
free(hii);
return (NULL);
}
}
for (w = 0; w < height; w++)
{
for (z = 0; z < width; z++)
hii[w][z] = 0;
}
return (hii);
}
