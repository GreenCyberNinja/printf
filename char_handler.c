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
	char cr = va_arg(vl, int);

	return (write(1, &cr, 1));
}
