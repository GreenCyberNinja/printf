#include "holberton.h"
/**
* getfop - gets function for conversion
* @c: identifier character
* @vl: va_list vl to be passed to functions
* Return: void
*/
int getfop(char c, va_list vl)
{
	switch (c)
	{
		case 'c':
			char_handler(vl);
			break;
		case 's':
			string_handler(vl);
			break;
		case 'i':
			int_handler(vl;
			break;
		case 'd':
			point_handler(vl);
			break;
		default:
			break;
	}
	return (0);
}
