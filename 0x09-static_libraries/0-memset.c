#include "main.h"
/**
* _memset - insert a value
* @s: ...
 * @b: ...
* @n: ...
 * Return: ....
*/
char *_memset(char *s, char b, unsigned int n)
{
int y = 0;
for (; n > 0; y++)
{
s[y] = b;
n--;
}
return (s);
}
