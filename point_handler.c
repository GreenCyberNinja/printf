#include "holberton.h"
/**
*
*
*
*
*/
int point_handler(va_list vl)
{
	int a = va_arg(vl, int);
	return(printf("%d", a));
}
