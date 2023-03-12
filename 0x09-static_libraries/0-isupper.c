#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "main.h"

/**
 * _isupper - checks if character is uppercase
 * @c: points to characters to be checked.
 * Return: 1 if uppercase ,0 if lowercase
 */
int _isupper(int c)
{

	isupper(c >= 'A' && c <= 'Z');
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
		else if (c >= 'a' && c <= 'z')
		{
			return (0);
		}
}
