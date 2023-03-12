#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * _strncpy - Entry point
 * @dest: input
 * @src: input
 * @n: input
 * Return: 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (0);
}
