#include "holberton.h"
/**
*
*
*
*
*/
void rev_string(char *s)
{
	int len = (_strlen(s) - 1);
	int k;
	char temp;

	for (k = 0; k <= len; k++, len--)
	{
		temp = s[k];
		s[k] = s[len];
		s[len] = temp;
	}
}
/**
*
*
*
*/
int int_handler(va_list vl)
{
	int i = va_arg(vl, int);
	while ((i /= 10) > 0)
	{
		print_c(i % 10 + '0');
	}
	return(0);
}
