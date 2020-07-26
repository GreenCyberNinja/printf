#include "holberton.h"
/**
*
*
*
*
*
*/
int char_handler(va_list vl)
{
	char c = va_arg(vl, int);
	print_c(c);
	return(1);
}
