#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints its own opcodes
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
int count, o;
char *arr;
if (argc != 2)
{
printf("Error\n");
exit(1);
}
count = atoi(argv[1]);
if (count < 0)
{
printf("Error\n");
exit(2);
}
arr = (char *)main;
for (o = 0; o < count; o++)
{
if (o == count - 1)
{
printf("%02hhx\n", arr[o]);
break;
}
printf("%02hhx ", arr[o]);
}
return (0);
}
