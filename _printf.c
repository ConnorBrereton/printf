#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

/**
  * _printf - custom printf()
  * function
  *
  * @format: ptr to input stream
  *
  * Return: len (success) 1 (fail)
  */

int _printf(const char *format, ...)
{
	va_list params;

	int i = 0;

	int len = 0;

	if (format == NULL)
		return (1);

	va_start(params, format);

	while (format && format[i])
	{
		if (format[i] == '%' && format[i + 1] == '%')
		{
			_putchar('%');
			len++;
			i++;
		}

		else if (format[i] == '%' && format[i + 1] != '%'
			&& format[i + 1] != '\0')
		{
			i++;
			len += getter(format, params, i);
		}
		/* expected case */
		else if (format[i] == '%' && (format[i + 1] == '\0'
			|| format[i + 1] == ' '))
			return (1);
		/* edge case */
		else
		{
			_putchar(format[i]);
			len++;
		}
		i++;
	}
	va_end(params);
	return (len);
}
