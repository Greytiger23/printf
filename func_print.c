#include "main.h"
#include <stdio.h>

/**
 * flag - function that prints the specifiers
 * @format: char array
 * Return: void
 */

int flag(const char *format, ...)
{
int a, flag;
flag = 0;
a = 0;
while (format[a])
{
if (format[a] == '%')
{
a++;
if (format[a] == '-') {
flag = 1;
a++; }
}
a++; }
return (flag);
}
/**
 * width - function that prints the specifiers
 * @format: char array
 * Return: void
 */
int width(const char *format, ...) {
int width, a;
width = 0;
while (format[a])
{
if (format[a] == '%')
{
a++;
while (format[a] >= '0' && format[a] <= '9') {
width = width * 10 + (format[a] - '0');
a++; }
}
a++; }
return (width);
}
/**
 * pre - function that prints the specifiers
 * @format: char array
 * Return: void
 */
int pre(const char *format, ...) {
int pre, a;
pre = -1;
a = 0;
while (format[a])
{
if (format[a] == '%')
{
a++;
if (format[a] == '.') {
a++;
pre = 0;
while (format[a] >= '0' && format[a] <= '9') {
pre = pre * 10 + (format[a] - '0');
a++; }
}
}
a++; }
return (pre);
}
