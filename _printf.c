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
int a = 0;
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
printf("%c", va_arg(ap, int));
break;
case 's':
b = va_arg(ap, char *);
printf("%s", b);
break;
case '%':
printf("%%");
break;
case 'd':
case 'i':
printf("%d", va_arg(ap, int));
break;
default:
putchar(*format);
format++;
continue; }
}
a++; }
va_end(ap);
return (a);
}
