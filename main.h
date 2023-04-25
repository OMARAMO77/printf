#ifndef MAIN_H
#define MAIN_H

#define BUFFER_SIZE 1024

/**
 * struct format - match the conversion specifiers for the printf function
 * @id: type char pointer of the specifier
 * @f: type pointer to function for the conversion specifier
 */

typedef struct format
{
	char *id;
	int (*f)();
} convert_match;


#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>


int _putchar(char c);
int _printf(const char *format, ...);
int _printint(va_list H);
int _puts(va_list H);
int _printbinary(va_list H);
int _printhex(va_list H);
int _printHEXA(va_list H);
int _printoct(va_list H);
int _printuns(va_list H);
int _printchar(va_list H);
int _printpercent(void);
#endif
