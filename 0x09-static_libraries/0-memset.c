#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * _memset - Entry point
 * @s: input
 * @b: input
 * @n: input
 * Return: 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
	return (0);
}
