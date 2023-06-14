#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/**
 **create_array - creates the array
 *@size:..
 *@c:..
 *Return: 0
 */
char *create_array(unsigned int size, char c)
{
	char *rtr;
	unsigned int y;

	rtr = malloc(sizeof(char) * size);
	if (size == 0 || rtr == NULL)
		return (NULL);
	for (y = 0; y < size; y++)
		rtr[y] = c;
	return (rtr);
}
