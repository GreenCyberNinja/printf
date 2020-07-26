#include "holberton.h"
/**
*
*
*
*
*/
int int_handler(va_list vl)
{
	int a = va_arg(vl, int);
	return(write(1, &a, sizeof(a)) + '0');
}
