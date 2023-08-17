#include "variadic_functions.h"
#include <stdarg.h>
/**
* sum_them_all - sum of parameters
* @n: ..
* @...: ...
* Return: .....
 */
int sum_them_all(const unsigned int n, ...)
{
va_list ap;
unsigned int k, add = 0;
va_start(ap, n);
for (k = 0; k < n; k++)
add += va_arg(ap, int);
va_end(ap);
return (add);
}
