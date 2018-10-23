#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

int _putchar (char c);

/**
 * getter - matches parameter stream
 * to array of structs containing
 * the functions type.
 *
 * @format: ptr to input stream
 * @params: name given to stream
 * @i: index for input stream
 *
 * Return - size of input stream
 */

int getter(const char *format, va_list params, int i)
{
	int j = 0, len = 0;

	type_s controller[] = {
		{ "c", print_char },
		{ "s", print_string },
		{ "d", print_numbers },
		{ "i", print_numbers },
		{NULL, NULL}
	};

	while (controller[j].type)
	{
		if (format[i] == *controller[j].type)
		{
			len += controller[j].f(params);
			break;
		}
		i++;
	}

	if (controller[j].type == NULL)
	{
		_putchar(format[i - 1]);
		_putchar(format[i]);
		len += 2;
	}
	return (len);
}
