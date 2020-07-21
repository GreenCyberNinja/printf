#include "holberton.h"
/**
* _strln - string length
* @s: input string
* Return: size of string
*/
int _strlen(char *s)
{
	int i = 1;

	if (*s != '\0')
	{
		return (i + _strlen(s + 1));
	}
	return (0);
}
