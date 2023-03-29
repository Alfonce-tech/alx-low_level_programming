#include <stdio.h>
#include"main.h"
#include <string.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argv: ..
 * @argc:..
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int n1 = 0;
	int n2 = 0;

	if (argc == 3)
	{
		n1 = atoi(argv[1]);
		n2 = atoi(argv[2]);
		printf("%d\n", n1 * n2);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
