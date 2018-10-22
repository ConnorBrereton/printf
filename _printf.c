#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * struct types - holds the argument type
 * and pointer to function with argument
 * type (our list of parameters).
 *
 * @type: ptr to the char identifier
 *
 * @f: pointer to function of params
 * in the ellipse.
 */

int _printf(const char *format, ...)
{
	int i;
	va_list params;
	
	type_s controller[] = {
		{'c', print_char},
		{'s', print_string},
		{'d', print_decimal},
		{NULL, NULL}
	};

	va_start(params, format);
