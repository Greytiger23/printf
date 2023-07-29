#include "main.h"
#include <stdio.h>

/**
 * flag - function that prints the specifiers
 * @format: char array
 * @a: integer
 * Return: void
 */

int flag(const char *format, int a)
{
int x, flag;
va_list ap;
flag = 0;
x = 0;
va_start(ap, format);
while (format[x])
{
if (format[x] == '%')
{
x++;
if (format[x] == '-')
{
flag = 1;
x++; }
}
x++; }
va_end(ap);
return (flag);
}
/**
 * width - function that prints the specifiers
 * @format: char array
 * @a: integer
 * Return: void
 */
int width(const char *format, int a)
{
int width, x;
va_list ap;
x = 0;
width = 0;
va_start(ap, format);
while (format[x])
{
if (format[x] == '%')
{
x++;
while (format[x] >= '0' && format[x] <= '9')
{
width = width * 10 + (format[x] - '0');
x++; }
}
x++; }
va_end(ap);
return (width);
}
/**
 * pre - function that prints the specifiers
 * @format: char array
 * Return: void
 */
int pre(const char *format, int a)
{
va_list ap;
int pre, x;
pre = -1;
x = 0;
va_start(ap, format);
while (format[x])
{
if (format[x] == '%')
{
x++;
if (format[x] == '.')
{
x++;
pre = 0;
while (format[x] >= '0' && format[x] <= '9')
{
pre = pre * 10 + (format[x] - '0');
x++; }
}
}
x++; }
va_end(ap);
return (pre);
}
/**
 * binary - function that prints binary
 * @n: unsigned int
 * Return: void
 */
void binary(unsigned int n)
{
if (n > 1)
{
binary(n / 2);
}
putchar('0' + (n % 2));
}
