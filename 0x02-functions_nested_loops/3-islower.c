#include "main.h"

/**
 * _islower -checks for lowercase
 * @c: the character checked
 * Return: 1 for lowercase character or 0 for other
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
