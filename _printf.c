#include "holberton.h"
/**
* _printf - prints string and converts imput to stdout
*
* @format: string to be printed with args
* Return: 0
*/
int _printf(const char *format, ...)
{
	va_list vl;
	int i, j, sum = 0, match = 0;

	func_t func[] = {
		{'d', point_handler},
		{'s', string_handler},
		{'c', char_handler},
		{'i', int_handler},
		{'\0', NULL} };
	if (format == NULL)
		return (0);
	va_start(vl, format);
	for (i = 0; format[i] != '\0'; i++)
	{

		if (format[i] == '%')
		{
			for (j = 0; func[j].s != '\0'; j++)
			{
				if (format[i + 1] == func[j].s && format[i + 1] != '\0')
				{
					sum += func[j].f(vl);
					i += 2, match += 2;
					break;
				}
			}
			if (format[i + 1] == '%')
			{
				i += 1;
				match += 1;
			}
		}
		if (format[i] != '\0')
			print_c(format[i]);
		else
			break;
	}
	va_end(vl);
	return ((i + sum) - match);
}
