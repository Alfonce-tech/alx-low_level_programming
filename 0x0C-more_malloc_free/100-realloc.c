#include <stdlib.h>
#include "main.h"
/**
* *_realloc - entry point.
* @ptr: pointer.
* @old_size: input
* @new_size: ....
* Return: ...
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *str1;
char *o_str;
unsigned int j;
if (new_size == old_size)
return (ptr);
if (new_size == 0 && o_str)
{
free(ptr);
return (NULL);
}
if (!ptr)
return (malloc(new_size));
str1 = malloc(new_size);
if (!str1)
return (NULL);
o_str = ptr;
if (new_size < old_size)
{
for (j = 0; j  < new_size; j++)
str1[j] = o_str[j];
}
if (new_size > old_size)
{
for (j = 0; j < old_size; j++)
str1[j] = o_str[j];
}
free(ptr);
return (str1);
}
