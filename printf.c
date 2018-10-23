#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

int print_char(va_list params);
int print_string(va_list params);
int print_numbers(va_list params);
int _putchar(char c);
int _intlen(int n);

/**
 * print_char - prints out the
 * char from the buffer.
 *
 * @params: input stream
 *
 * Return: 0 (success)
 */

int print_char(va_list params)
{
	/* buffer contains character and \0 */
	char buffer;

	buffer = va_arg(params, int);
	_putchar(buffer);
	return (0);
}

/**
 * print_string - prints one char
 *
 * @params: input stream
 *
 * Return: buffer_len (success) 1 (failure)
 */

int print_string(va_list params)
{
	int i;
	char *buffer;

	buffer = va_arg(params, char *);

	if (buffer == NULL)
	{
		buffer = "(null)";
		return (1);
	}

	for (i = 0; buffer[i] != '\0'; buffer++)
	{
		_putchar(buffer[i]);
	}
	return (i);
}

/**
 * print_numbers - prints decimal stream
 *
 * Return: buffer_len (success) 1 (failure)
 */

int print_numbers(va_list params)
{
	unsigned int i;
	int n;

	n = va_arg(params, int);

	if (n < 0)
	{
		_putchar('-');
		i = -n;
	}
	else
	{
		i = n;
	}
	print_recursive(i);
	return (_intlen(i));
}

/**
 * print_recursive - prints decimal stream
 *
 * @params: input stream
 *
 * Return: buffer_len (success) 1 (failure)
 */

int print_recursive(unsigned int n)
{
	if (n / 10 != 0)
	{
		print_recursive(n / 10);
	}
	_putchar((n % 10) + '0');

	return (1);
}

/**
 * _intlen - calculates length of integer
 *
 * @n: number from stream
 *
 * Return: len (success)
 */

int _intlen(int n)
{
	int len = 0;

	if (n < 10)
	{
		len = 1;
		return (len);
	}
	return (1 + _intlen(n / 10));
}
