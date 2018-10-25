#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * getter - matches stream format
 * to array of structs containing
 * the formatter type.
 *
 * @format: pointer to input stream
 *
 * @params: name given to stream
 *
 * @j: index for input stream
 *
 * Return: (len) size of input stream
 */

int getter(const char *format, va_list params, int j)
{
	type_s controller[] = {
		{'c', print_char},
		{'s', print_string},
		{'d', print_number},
		{'i', print_number},
		{'%', print_char},
		{'b', print_binary},
		{'o', print_octal},
		{'\0', NULL}
	};
	int i, len;

	i = len = 0;

	/* find valid formatter and adds to len */
	while (controller[i].type)
	{
		if (format[j] == controller[i].type)
		{
			len += (controller[i].f(params));
			break;
		}
		i++;
	}

	/* handles end of stream */
	if (controller[i].type == '\0')
	{
		_putchar(format[j]);
		_putchar(format[j--]);
		len += 2;
	}
	return (len);
}
