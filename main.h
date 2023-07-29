#ifndef MAIN_H
#define MAIN_H
#define BUFFER_SIZE 1024

int _printf(const char *format, ...);
int flag(const char *format, int a);
int width(const char *format, int a);
int pre(const char *format, int a);
void binary(unsigned int n);
#endif
