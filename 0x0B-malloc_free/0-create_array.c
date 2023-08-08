#include "main.h"
#include <stdlib.h>
/**
* create_array - create array of size.
* @size: input
* @c: input
* Description: create array of size.
* Return: pointer to array.
 */
char *create_array(unsigned int size, char c)
{
char *ptr;
unsigned int j;
ptr = malloc(sizeof(char) * size);
if (size == 0 || ptr == NULL)
return (NULL);
for (j = 0; j < size; j++)
ptr[j] = c;
return (ptr);
}
