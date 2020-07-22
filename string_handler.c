#include "holberton.h"
/**
* string_handler - handles string comnversion
* @vl: va_arg list
*
* Return: how many characters are print
*/
int string_handler(va_list vl)
{
	int i;
	char *s;

	s = va_arg(vl, char *);

	for (i = 0; s[i] != '\0'; i++)
		print_c(s[i]);
	return (i);
}
