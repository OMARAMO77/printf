#ifndef MAIN_H
#define MAIN_H

#define BUFFER_SIZE 1024

#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>

int _putchar(char c);
int _printf(const char *format, ...);
int _printint(int n);
int _puts(char *s);
int _printbinary(unsigned int x);
int _printhex(unsigned int x);
int _printHEXA(unsigned int X);
int _printoct(unsigned int o);
int _printuns(unsigned int u);

#endif
