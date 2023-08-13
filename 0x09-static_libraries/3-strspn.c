#include "main.h"
/**
* _strspn - Entry point
* @s: input
* @accept: input
* Return: 0
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int o = 0;
int p;
while (*s)
{
for (p = 0; accept[p]; p++)
{
if (*s == accept[p])
{
o++;
break;
}
else if (accept[p + 1] == '\0')
return (o);
}
s++;
}
return (o);
}
