#include "main.h"

/**
 * _isupper -checks if a letter is uppercase
 * @x: the number to be checked
 * Return: 1 for uppercase letter or p for any other
 */
int _isupper(int x)
{
	if (x >= 65 && x <= 90)
	{
		return (1);
	}
	return (0);
}
