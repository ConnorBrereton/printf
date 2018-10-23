#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * print_char - prints char
 *
 * @params: points to input stream
 *
 * Return: 0 (success)
 */

int print_char(va_list params)
{
	char c;

	c = va_arg(params, int);
	_putchar(c);
	return (0);
}

/**
 * print_string - prints out the
 * string from params
 *
 * @params: points to input stream
 *
 * Return: len of string (success)
 */

int print_string(va_list params)
{
	int len;
	char *s;

	s = va_arg(params, char *);

	if (s == NULL)
		s = "(null)";

	for (len = 0; s[len] != '\0'; len++)
		_putchar(s[len]);

	return (len);
}

/**
 * print_number - prints integer
 * / decimal and handles '-'
 *
 * @params: points to input stream
 *
 * Return: len of number (success)
 * 1 (failure)
 */

int print_number(va_list params)
{
	int number, denominator = 1, len = 0;
	unsigned int n;

	number = va_arg(params, int);

	/* adds '-' to count and turns into unsigned */
	if (number < 0)
	{
		len += _putchar('-');
		n = number * -1;
	}

	/* signed to unsigned conversion */
	else
	{
		n = number;
	}

	/* n->0 as denominator->infinity */
	while (n / denominator > 9)
	{
		denominator *= 10;
	}

	/* prints number in order and controls len */
	while (denominator != 0)
	{
		len += _putchar(n / denominator + '0');
		n %= denominator;
		denominator /= 10;
	}
	return (len);
}
