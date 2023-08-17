#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
* print_strings - ...
* @separator: .....
* @n: ....
* @...: ....
* Description: ...
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list strings;
char *ptr;
unsigned int order;
va_start(strings, n);
for (order = 0; order  < n; order++)
{
ptr = va_arg(strings, char *);
if (ptr == NULL)
printf("(nil)");
else
printf("%s", ptr);
if (order != (n - 1) && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(strings);
}
