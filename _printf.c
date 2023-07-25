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
int a, b, x = 0;
char *i;
a = 0;
va_start(ap, format);
while (format[a])
{
if (format[a] == '%')
{
a++;
switch (format[a])
{
case 'c':
b = va_arg(ap, int);
printf("%c", b);
break;
case 's':
i = va_arg(ap, char *);
printf("%s", i);
break;
case '%':
printf("%%");
break;
default:
{
printf("%c", format[a]);
break;
}
}
x++;
}
else
{
printf("%c", format[a]);
}
a++;
}
va_end(ap);
return (x);
}
