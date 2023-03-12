#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * _strncat - Entry point
 * @dest: input
 * @src: input
 * @n: input
 * Return: 0
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (0);
}
