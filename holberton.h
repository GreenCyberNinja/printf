#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>
/**
* struct func_struct - struct used in conversion specifier detection
* @s: specifier
* @f: function for specifier
*
*
*
*/
typedef struct func_struct
{
	char s;
} func_t;

int print_c(char c);
int getfop(char, va_list);
int char_handler(va_list);
int string_handler(va_list);
int point_handler(va_list);
int int_handler(va_list);
int _printf(const char *format, ...);
int _strlen(char *s);
#endif
