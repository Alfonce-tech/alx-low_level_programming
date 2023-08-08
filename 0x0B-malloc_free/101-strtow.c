#include <stdlib.h>
#include "main.h"
/**
* count_word - helper function to count the number of words in a string
* @s: string to evaluate
* Return: number of words
*/
int count_word(char *s)
{
int you, d, x;
you = 0;
x = 0;
for (d = 0; s[d] != '\0'; d++)
{
if (s[d] == ' ')
you = 0;
else if (you == 0)
{
you = 1;
x++;
}
}
return (x);
}
/**
* **strtow - main entry
* @str: input
* Return: ....
*/
char **strtow(char *str)
{
char **origin, *ytp;
int j, l = 0, jin = 0, count, d = 0, begin, finish;
while (*(str + jin))
jin++;
count = count_word(str);
if (count  == 0)
return (NULL);
origin = (char **) malloc(sizeof(char *) * (count + 1));
if (origin == NULL)
return (NULL);
for (j = 0; j <= jin; j++)
{
if (str[j] == ' ' || str[j] == '\0')
{
if (d)
{
finish = j;
ytp = (char *) malloc(sizeof(char) * (d + 1));
if (ytp == NULL)
return (NULL);
while (begin < end)
*ytp++ = str[begin++];
*ytp = '\0';
origin[l] = ytp - d;
l++;
d = 0;
}
}
else if (d++ == 0)
begin = j;
}
origin[l] = NULL;
return (origin);
}
