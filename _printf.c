#include "holberton.h"
#include <unistd.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * _printf - The function compares the input stream @format against @specs
 * and executes the matched function type.
 * struct types - holds the argument type
 * and pointer to function with argument
 * type (our list of parameters).
 *
 * @format: the input stream
 * @type: ptr to the char identifier
 *
 * @specs: array of structs
 *
 * Return - Specifier ex: printf("Specifier")
 * @f: pointer to function of params
 * in the ellipse.
 */

int _printf(const char *format, ...)
{
	int idx, specs_idx, count;
	va_list args;
	pt_t specs[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_perc},
		{"d", print_numbers},
		{"i", print_numbers},
		{"r", print_rev},
		{'\0', NULL}
	};

	va_start(args, format);

	if (format == NULL)
		return (-1);

	for (idx = 0; format != NULL && format[idx] != '\0'; idx++)
	{
		if (format[idx] == '%')
		{
			idx++;
			if (format[idx] == '\0')
			{
				return (-1);
			}
			specs_idx = 0;
			while (specs[specs_idx].pt != NULL)
			{
				if(*(specs[specs_idx].pt) == format[idx])
					count += specs[specs_idx].f(args);
				specs_idx++;
			}
		}
		if (format[idx] != '%' && format [idx] != '\0')
		{
		       count += _putchar(format[idx]);

		}
	}
	va_end(args);

	return(count);
}
