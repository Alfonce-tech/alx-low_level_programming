#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup -..
 * @str:Pointer
 * Return:..
 */
char *_strdup(char *str)
{
	char *yyy;
	int a, b;

	if (str == NULL)
		return (NULL);
	a = 0;
	while (str[a] != '\0')
		a++;
	yyy = malloc(sizeof(char) * (a + 1));
	if (yyy == NULL)
		return (NULL);
	for (b = 0; str[b]; b++)
		yyy[b] = str[b];
	return (yyy);
}
