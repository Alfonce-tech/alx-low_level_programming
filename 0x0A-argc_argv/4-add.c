#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
* check_num - check - string there are digit
* @str: array str
* Return: 0 (Success)
*/
int check_num(char *str)
{
unsigned int add;
add = 0;
while (add < strlen(str))
{
if (!isdigit(str[add]))
{
return (0);
}
add++;
}
return (1);
}
/**
* main - name of program
* @argc: Count
* @argv: Arguments
* Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
int add;
int str_to_int;
int ADD = 0;
add = 1;
while (add < argc)
{
if (check_num(argv[add]))
{
str_to_int = atoi(argv[add]);
ADD += str_to_int;
}
else
{
printf("Error\n");
return (1);
}
add++;
}
printf("%d\n", ADD);
return (0);
}
