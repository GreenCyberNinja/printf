#include "holberton.h"
/**
*
*
*
*
*/
int _printf(const char *format, ...)
{
	va_list vl;
	int i, j;
	func_t func[] = {
		{'d'},
		{'s'},
		{'c'},
		{'i'},
		{'\0'}
	};

	va_start(vl, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			for (j = 0; func[j].s != '\0'; j++)
			{
				if (format[i + 1] == func[j].s && format[i + 1] != '\0')
				{
					getfop(func[j].s, vl);
				}
			}
			i += 2;
		}
		print_c(format[i]);
	}
	va_end(vl);
	return(0);
}
