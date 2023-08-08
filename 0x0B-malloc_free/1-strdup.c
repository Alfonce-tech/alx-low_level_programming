#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* _strdup - entry point
* @str: ...
* Return: 0
*/
char *_strdup(char *str)
{
char *ptr:
int j, s = 0;
if (str == NULL)
return (NULL);
j = 0;
while (str[j] != '\0')
j++;
ptr = malloc(sizeof(char) * (j + 1));
if (ptr == NULL)
return (NULL);
for (s = 0; str[s]; s++)
ptr[s] = str[s];
return (ptr);
}
