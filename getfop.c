#include "holberton.h"
/**
*
*
*
*
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
		default:
			break;
	}
	return (0);
}
