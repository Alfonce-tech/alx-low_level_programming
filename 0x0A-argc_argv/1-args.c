#include <stdio.h>
#include "main.h"
/**
* main - print the number of arguments passed to the program
* @argc: number
* @argv: array of argument
 * Return: 0
*/
int main(int argc, char *argv[])
{
(void) argv; /*Ignore argv*/
printf("%d\n", argc - 1);
return (0);
}
