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
int a = 0, x = 0, i, y;
char *b;
va_list ap;
while (format[a]) {
if (format[a] == '%') {
a++;
switch (format[a]) {
case 'c':
printf("%c", va_arg(ap, int));
x++;
break;
case 's':
b = va_arg(ap, char *);
printf("%s", b);
x++;
break;
case '%':
printf("%%");
x++;
break;
case 'd': case 'i':
i = width(format, &a);
y = pre(format, &a);
x += printf("%*.*d", i, y, va_arg(ap, int));
break;
default:
a++;
x++;
continue; }
}
a++; }
va_end(ap);
return (x);
}
