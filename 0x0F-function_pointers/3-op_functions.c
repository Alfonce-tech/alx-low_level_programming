#include "3-calc.h"
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
/**
* op_add - Returns the sum of two numbers.
 * @a: first
* @b: second 
 * Return: sum of a and b
*/
int op_add(int a, int b)
{
return (a + b);
}
/**
* op_sub - Difference of two numbers.

 * @a: number one

 * @b: Number two
* Return: Difference of a and b.
*/
int op_sub(int a, int b)
return (a - b);
}
/**
* op_mul - Product of two numbers.
* @a: number one
* @b: number two
 * Return: Product of a and b.
*/
int op_mul(int a, int b)
{
return (a * b);
}
/**
 * op_div - Division of two numbers.
* @a: number one
 * @b: number two
 * Return: Quotient of a and b.
 */
int op_div(int a, int b)
{
return (a / b);
}
/**
 * op_mod - remainder of the quotient.
* @a: number one
* @b: number two
* Return: The remainder of the division of a by b.
 */
int op_mod(int a, int b)
{
return (a % b);
}
