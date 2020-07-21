#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <string.h>
#include <limits.h>
/**
* struct func_struct - struct used in conversion specifier detection
* @spec: specifier
* @f: function for specifier
*/
typedef struct func_struct
{
	char s;
} func_t;

int print_c(char c);
int getfop(char, va_list);
int _putchar(char c);
int char_handler(va_list);
int string_handler(va_list);
int point_handler(va_list);
int int_handler(va_list);
int _strlen(char *s);
int _printf(const char *format, ...);
#endif
