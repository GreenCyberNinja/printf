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
		/*{'d', int_handler(gcvt(va_arg(vl, double)))},*/
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
					printf("haha you found the function");
				}
			}
		}
	}
	va_end(vl);
	return(0);
}
