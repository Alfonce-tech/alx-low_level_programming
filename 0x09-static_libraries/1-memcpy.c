#include "main.h"
/**
*_memcpy - a function copying memory area
*@dest:...
*@src: ...
*@n:..
*Return: memory copied with n byted changed
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
int a = 0;
int b = n;
for (; a < b; a++)
{
dest[a] = src[a];
n--;
}
return (dest);
}
