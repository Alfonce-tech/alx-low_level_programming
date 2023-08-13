#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#define ERR_MSG "Error"
/**
* is_digit - entry point
* @s: string to be evaluated
* Return: 0 if a non-digit is found, 1 otherwise
*/
int is_digit(char *s)
{
int j = 0;
while (s[j])
{
if (s[j] < '0' || s[j] > '9')
return (0);
j++;
}
return (1);
}
/**
* _strlen - return length
* @s: checked string
* Return: the length of the string
*/
int _strlen(char *s)
{
int j = 0;
while (s[j] != '\0')
{
j++;
}
return (j);
}
/**
* errors - main entry.
*/
void errors(void)
{
printf("Error\n");
exit(98);
}
/**
* main - main entry.
* @argc: ...
* @argv: ...
* Return: 0
*/
int main(int argc, char *argv[])
{
char *t1, *t2;
int jin1, jin2, jin, j, take, num1, num2, *outcome, b = 0;
t1 = argv[1], t2 = argv[2];
if (argc != 3 || !is_digit(t1) || !is_digit(t2))
errors();
jin1 = _strlen(t1);
jin2 = _strlen(t2);
jin = jin1 + jin2 + 1;
outcome = malloc(sizeof(int) * jin);
if (!outcome)
return (1);
for (j = 0; j <= jin1 + jin2; j++)
outcome [j] = 0;
for (jin1 = jin1 - 1; jin1 >= 0; jin1--)
{
num1 = t1[jin1] - '0';
take = 0;
for (jin2 = _strlen(t2) - 1; jin2 >= 0; jin2--)
{
num2 = t2[jin2] - '0';
take += outcome[jin1 + jin2 + 1] + (num1 * num2);
outcome [jin1 + jin2 + 1] = take % 10;
take /= 10;
}
if (take > 0)
outcome [jin1 + jin2 + 1] += take;
}
for (j = 0; j < take - 1; j++)
{
if (outcome[j])
b = 1;
if (b)
_putchar(outcome[j] + '0');
}
if (!b)
_putchar('0');
_putchar('\n');
free(outcome);
return (0);
}
