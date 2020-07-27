#include "holberton.h"
/**
* rev_string - reverses string
* @s: string to reverse
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
* int_handler - handles int conversion
* @vl: va_arg list
* Return: void
*/
int int_handler(va_list vl)
{
	int i = va_arg(vl, long int), j = 0, stlp = 0;
	char s[11];

	while ((i / 10) > 0)
	{
		s[j] = (char)(i % 10 + '0');
		i /= 10;
		j++;
	}
	s[j] = (char)(i % 10 + '0');
	j++;
	while (j < 11)
	{
		s[j] = '\0';
		j++;
	}
	rev_string(s);
	while (s[stlp] != '\0')
	{
		print_c(s[stlp]);
		stlp++;
	}
	return (stlp);
}
