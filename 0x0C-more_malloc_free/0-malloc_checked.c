#include <stdlib.h>
#include "main.h"
/**
* *malloc_checked - giving memory
* @b: ...
* Return: a pointer to the allocated memory
*/
void *malloc_checked(unsigned int b)
{
void *str;
str = malloc(b);
if (str == NULL)
exit(98);
return (str);
}
