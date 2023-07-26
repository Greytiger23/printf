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
int a = 0;
char *s;
va_start(ap, format);
while (*format) {
if (*format == '%') {
format++;
switch (*format) {
case 'c':
printf("%c", va_arg(ap, int));
a++;
break;
case 's':
s = va_arg(ap, char *);
while (*s) {
printf("%s", s);
s++;
a++;
break;
case '%':
printf("%%");
a++;
break;
default:
break;
}
}
}
else 
{
putchar(*format);
a++;
}
format++;
}
va_end(ap);
return (a);
}
