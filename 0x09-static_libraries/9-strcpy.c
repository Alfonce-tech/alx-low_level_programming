#include "main.h"
/**
* char *_strcpy - entry point
* @dest: input
* @src: copy from
* Return: string
*/
char *_strcpy(char *dest, char *src)
{
int k = 0;
int o = 0;
while (*(src + k) != '\0')
{
k++;
}
for ( ; o < k ; o++)
{
dest[o] = src[o];
}
dest[k] = '\0';
return (dest);
}
