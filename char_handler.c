#include "holberton.h"
/**
* char_handler - handles char conversion
*
* @vl: va_arg list
*
* Return: return write char
*/
int char_handler(va_list vl)
{
	char c = va_arg(vl, int);
	print_c(c);
	return(1);
}
