#include <stdio.h>
#include "main.h"
/**
* _atoi - string to integer
* @s: input
* Return: int
*/
int _atoi(char *s)
{
int j, e, m, jin, g, number;
j = 0;
e = 0;
m = 0;
jin = 0;
g = 0;
number = 0;
while (s[jin] != '\0')
jin++;
while (j < jin && g == 0)
{
if (s[j] == '-')
++e;
if (s[j] >= '0' && s[j] <= '9')
{
number = s[j] - '0';
if (e % 2)
number = -number;
m = m * 10 + number;
g = 1;
if (s[j + 1] < '0' || s[j + 1] > '9')
break;
g = 0;
}
j++;
}
if (g == 0)
return (0);
return (m);
}
/**
* main - multiply two numbers
* @argc: number
* @argv: array
* Return: 0
*/
int main(int argc, char *argv[])
{
int outcome, _1, _2;
if (argc < 3 || argc > 3)
{
printf("Error\n");
return (1);
}
_1 = _atoi(argv[1]);
_2 = _atoi(argv[2]);
outcome = _1 * _2;
printf("%d\n", outcome);
return (0);
}
