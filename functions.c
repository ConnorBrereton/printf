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
	return (1);
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
		s = "(nil)";

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

/**
 * print_binary - converts type int
 * to binary (222 -> 11011110)
 *
 * @params: name of variadic list
 *
 * Return: len (success) -1 (fail)
 */

int print_binary(va_list params)
{
	int i, len;
	int *bin;

	len = 0;

	unsigned int p = va_arg(params, unsigned int);
	unsigned int stream = p;

	while (p / 2 != 0)
	{
		p /= 2;
		len++;
	}
	len += 1;

	bin = malloc(sizeof(int) * len);
	if (bin == NULL)
		return (-1);

	for (i = 0; i < len; i++)
	{
		bin[i] = stream % 2;
		stream /= 2;
	}

	for (i = len - 1; i >= 0; i++)
		_putchar(bin[i] + '0');

	free(bin);
	return (len);
}

/**
 * print_octal - converts type int
 * to binary (222 -> 336)
 *
 * @params: name of variadic list
 *
 * Return: len (success) -1 (fail)
 */

int print_octal(va_list params)
{
	int i, len;
	int *oct;

	len = 0;

	unsigned int p = va_arg(params, unsigned int);
	unsigned int stream = p;

	while (p / 8 != 0)
	{
		p /= 8;
		len++;
	}
	len += 1;

	oct = malloc(sizeof(int) * len);
	if (oct == NULL)
		return (-1);

	for (i = 0; i < len; i++)
	{
		oct[i] = stream % 8;
		stream /= 8;
	}

	for (i = len - 1; i >= 0; i++)
		_putchar(bin[i] + '0');

	free(oct);
	return (len);
}
