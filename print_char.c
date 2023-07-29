#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <string.h>

/**
 * print_str - function that prints anything
 * @str: char array
 * Return: void
 */

int print_str(const char *format, char *str)
{
int a = 0, x = 0, i, y;
char *b;
va_list ap;
va_start(ap, format);
while (format[a])
{
if (format[a] == '%')
{
a++;
switch (format[a])
{
case 'c':
_printf("%c", va_arg(ap, int));
x++;
break;
case 's':
b = va_arg(ap, char *);
_printf("%s", b);
x++;
break;
case '%':
_printf("%%");
x++;
break;
case 'd': case 'i':
i = width(format, &a);
y = pre(format, &a);
x += _printf("%*.*d", i, y, va_arg(ap, int));
break;
default:
a++;
x++;
continue; }
}
a++; }
va_end(ap);
return (a);
}
