#include "main.h"
#include <stdlib.h>
/**
* argstostr - entry
* @ac: input
* @av: ....
* Return: 0
*/
char *argstostr(int ac, char **av)
{
int j, m, s = 0, k = 0;
char *ptr;
if (ac == 0 || av == NULL)
return (NULL);
for (j = 0; j < ac; j++)
{
for (m = 0; av[j][m]; m++)
k++;
}
k += ac;
ptr = malloc(sizeof(char) * j + 1);
if (ptr == NULL)
return (NULL);
for (j = 0; j < ac; j++)
{
for (m = 0; av[j][m]; m++)
{
ptr[s] = av[j][m];
s++;
}
if (ptr[s] == '\0')
{
ptr[s++] = '\n';
}
}
return (ptr);
}
