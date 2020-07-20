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
	char *s;
	void (*f)(char *);
} func_t;

int _putchar(char c);
void char_handler(char *);
void string_handler(char *);
void point_handler(char *);
void int_handler(char *);

#endif
