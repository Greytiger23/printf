#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * flag - function that prints the specifiers
 * @format: char array
 * @x: integer
 * Return: void
 */

int flag(const char *format, int x)
{
int flag;
flag = 0;
x = 0;
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
x++;
}
return (flag);
}
/**
 * width - function that prints the specifiers
 * @format: char array
 * @x: integer
 * Return: void
 */
int width(const char *format, int x)
{
int width;
x = 0;
width = 0;
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
return (width);
}
/**
 * pre - function that prints the specifiers
 * @format: char array
 * @x: integer
 * Return: void
 */
int pre(const char *format, int x)
{
int pre;
pre = -1;
x = 0;
while (format[x])
{
if (format[x] == '%')
{
x++;
if (format[x] == '.')
{
pre = 0;
while (format[x] >= '0' && format[x] <= '9')
{
pre = pre * 10 + (format[x] - '0');
x++; }
}
}
x++; }
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
