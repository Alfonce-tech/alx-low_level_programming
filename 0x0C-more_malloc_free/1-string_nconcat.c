#include <stdlib.h>
#include "main.h"
/**
* *string_nconcat - entry point
* @s1: ...
* @s2: ...
* @n: input 3
* Return: ...
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *t;
unsigned int j = 0, k = 0, jin1 = 0, jin2 = 0;
while (s1 && s1[jin1])
jin1++;
while (s2 && s2[jin2])
jin2++;
if (n < jin2)
t = malloc(sizeof(char) * (jin1 + n + 1));
else
t = malloc(sizeof(char) * (jin1 + jin2 + 1));
if (!t)
return (NULL);
while (j < jin1)
{
t[j] = s1[j];
j++;
}
while (n < jin2 && j < (jin1 + n))
t[j++] = s2[k++];
while (n >= jin2 && j < (jin1 + jin2))
t[j++] = s2[k++];
t[j] = '\0';
return (t);
}
