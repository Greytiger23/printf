#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <string.h>

/**
 * _printf - function that prints anything
 * @format: char array
 * Return: void
 */

int _printf(const char *format, ...)
{
va_list ap;
int a = 0, b, i;
char *x;
va_start(ap, format);
b = strlen(format);
while (format[a])
{
if (format[a] == '%' && a < b)
{
a++;
switch (format[a])
{
case 'c':
i = va_arg(ap, int);
printf("%c", i);
break;
case 's':
x = va_arg(ap, char *);
printf("%s", x);
break;
case '%':
printf("%%");
break;
default:
printf("%c", format[a]);
break;
}
}
a++;
}
va_end(ap);
return (a);
}
