#include "main.h"
int actual_prime(int n, int i);
/**
* is_prime_number - entry point
* @n: input
* Return: 1
*/
int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (actual_prime(n, n - 1));
}
/**
* actual_prime - entry point
 * @n: ...
* @i: ...
* Return: 1
*/
int actual_prime(int n, int i)
{
if (i == 1)
return (1);
if (n % i == 0 && i > 0)
return (0);
return (actual_prime(n, i - 1));
}
