#ifndef MAIN_H
#define MAIN_H
#define BUFFER_SIZE 1024

int _printf(const char *format, ...);
int s(const char *format, int a);
int flag(const char *format, int x);
int width(const char *format, int x);
int pre(const char *format, int x);
void binary(unsigned int n);
char str(const char *format, char s);
#endif
