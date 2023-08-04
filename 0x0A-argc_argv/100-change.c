#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* main - entry point
* @argc: input
* @argv: input
* Return: 0
*/
int main(int argc, char *argv[])
{
int count, k, outcome;
int money[] = {25, 10, 5, 2, 1};
if (argc != 2)
{
printf("Error\n");
return (1);
}

count = atoi(argv[1]);
outcome = 0;
if (outcome < 0)
{
printf("0\n");
return (0);
}

for (k = 0; k < 5 && count >= 0; k++)
{
while (count >=  money[k])
{
outcome++;
count -= money[k];
}
}
printf("%d\n", outcome);
return (0);
}
