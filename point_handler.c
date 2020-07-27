#include "holberton.h"
/**
* point_handler - handles floats and doubles
* @vl: argument list used as input
*
* Return: 0
*/
int point_handler(va_list vl)
{
	int a = va_arg(vl, int);

	return (a);
}
