#include "main.h"
#include <stdlib.h>
/**
* str_concat - entry point
* @s1: input
* @s2: input
* Return: 1
*/
char *str_concat(char *s1, char *s2)
{
char *attach;
int j, hi;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
j = hi = 0;
while (s1[j] != '\0')
j++;
while (s2[hi] != '\0')
hi++;
attach = malloc(sizeof(char) * (j + hi + 1));
if (attach == NULL)
return (NULL);
j = hi = 0;
while (s1[j] != '\0')
{
attach[j] = s1[j];
j++;
}
while (s2[hi] != '\0')
{
attach[j] = s2[hi];
j++, hi++;
}
attach[j] = '\0';
return (attach);
}
