#include "main.h"
#include <stdlib.h>

/**
 * *str_concat -..
 * @s1:..
 * @s2:..
 * Return:..
 */
char *str_concat(char *s1, char *s2)
{
	char *cut;
	int a, ba;

	if (s1 == NULL)
		s1 = NULL;
	if (s2 == NULL)
		s2 = NULL;
	a = ba = 0;
	while (s1[a] != '\0')
		a++;
	while (s2[ba] != '\0')
		ba++;
	cut = malloc(sizeof(char) * (a + ba + 1));
	if (cut == NULL)
		return (NULL);
	a = ba = 0;
	while (s1[a] != '\0')
	{
		cut[a] = s1[a];
		a++;
	}
	while (s2[ba] != '\0')
	{
		cut[a] = s2[ba];
		a++, ba++;
	}
	cut[a] = '\0';
	return (cut);
}
