#include "main.h"
/**
* _atoi - convert string to integer
 * @s: ...
 * Return: ....
*/
int _atoi(char *s)
{
int show = 1, k = 0;
unsigned int cue = 0;
while (!(s[k] <= '9' && s[k] >= '0') && s[k] != '\0')
{
if (s[k] == '-')
show *= -1;
k++;
}
while (s[k] <= '9' && (s[k] >= '0' && s[k] != '\0'))
{
cue = (cue * 10) + (s[k] - '0');
k++;
}
cue *= sign;
return (cue);
}
