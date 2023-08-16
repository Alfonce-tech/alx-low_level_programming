#include "function_pointers.h"
/**
 * int_index - return= true, else -1
 * @array: aray
 * @size:..
 * @cmp:..
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int w;
if (array == NULL || size <= 0 || cmp == NULL)
return (-1);
for (w = 0; w < size; w++)
{
if (cmp(array[w]))
return (w);
}
return (-1);
}
