#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_rev - Uses specifier "r" to reverse a string
 *
 * @params: Points to parament in the argument list
 *
 * Return: The string in reverse
 */

int print_rev(va_list params)
{
	char *str = va_arg(params, char *);
	int i, len;

	if (str)
	{
		len = _strlen(str) - 1;
		for (; len >= 0; len--)
		{
			_putchar(str[len]);
			i++;
		}
	}

	return (i);

}
