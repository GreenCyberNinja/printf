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
	char cr = va_arg(vl, int);

	return (write(1, &cr, 1));
}
