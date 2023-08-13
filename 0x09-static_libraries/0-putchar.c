#include <unistd.h>
/**
 * _putchar - writes character to stdout
* @c: character
 * Return: 1
* On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
