#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <limits.h>

/**
* struct func_struct - struct used in conversion specifier detection
* @spec: specifier
* @f: function for specifier
*
*
*
*/
typedef struct func_struct
{
	char s;
} func_t;

int _putchar(char c);
int char_handler(char *);
int string_handler(char *);
int point_handler(char *);
int int_handler(char *);
int _printf(const char *format, ...);

#endif
