#include "main.h"

/**
 * _strlen_recursion -Returns the length of a string
 * @s: the string to be measured
 * Return: the length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (_strlen_recursion(s) + 1);
}
