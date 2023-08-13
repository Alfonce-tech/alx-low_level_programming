#include <stdlib.h>
#include "main.h"
/**
* *array_range - array creation
* @min: ...
* @max: ...
* Return: pointer to the new array
*/
int *array_range(int min, int max)
{
int *str;
int j, ammount;
if (min > max)
return (NULL);
ammount = max - min + 1;
str = malloc(sizeof(int) * ammount);
if (str == NULL)
return (NULL);
for (j = 0; min <= max; j++)
str[j] = min++;
return (str);
}
