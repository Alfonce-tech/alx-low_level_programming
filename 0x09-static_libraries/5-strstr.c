#include "main.h"
/**
* _strstr - Entry point
* @haystack: ...
* @needle: ...
* Return: 0
*/
char *_strstr(char *haystack, char *needle)
{
for (; *haystack != '\0'; haystack++)
{
char *k = haystack;
char *j = needle;

while (*k == *j && *j != '\0')
{
k++;
j++;
}
if (*j == '\0')
return (haystack);
}
return (0);
}
