#include <stdio.h>
/**
 * main- print alphabets
 * Return: 0 success
 */
int main(void)
{
	char c;
	char d;

	c = 'a';
	d = 'A';
	while (c <= 'z')
	{
		putchar(c);
		d++;
	}
	putchar('\n');
	return (0);
}
