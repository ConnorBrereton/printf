#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

/**
  * _printf - handles formatter 
  * and specifier iteration
  *
  * @format: va_list declaration
  * Return: len (success) 1 (fail)
  */

int _printf(const char *format, ...)
{
	int i = 0, len = 0;

	va_list params;

	if (format == NULL)
		return (1);

	va_start(params, format);

	while (format[i] != '\0')
	{
		/* case 1: formatter without specifier */
		if (format[i] == '%' && (format[i + 1] == ' ' || format[i + 1] == '\0'))
			return (1);

		/* case 2: double formatter */
		else if (format[i] == '%' && format[i + 1] == '%')
		{
			_putchar('%');
			len++;
			i++;
		}

		/* case 3: formatter with valid specifier */
		else if (format[i] == '%' && format[i + 1] != '\0' && format[i + 1] != '%')
		{
			len += getter(format, params, i);
			i++;
		}

		/* case 4: memory only has formatter */
		else
		{
			_putchar(format[i]);
			len++;
		}
	}
	/* len = number of characters */
	return (len);
}
