#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
* print_all - prints anything
* @format:....
*/
void print_all(const char * const format, ...)
{
int j = 0;
char *ptr, *plan = "";
va_list list;
va_start(list, format);
if (format)
{
while (format[j])
{
switch (format[j])
{
case 'c':
printf("%s%c", plan, va_arg(list, int));
break;
case 'i':
printf("%s%d", plan, va_arg(list, int));
break;
case 'f':
printf("%s%f", plan, va_arg(list, double));
break;
case 's':
ptr = va_arg(list, char *);
if (!ptr)
ptr = "(nil)";
printf("%s%s", plan, ptr);
break;
default:
j++;
continue;
}
plan = ", ";
j++;
}
}

printf("\n");
va_end(list);
}
