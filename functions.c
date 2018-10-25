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
 * _strlen - Returns length of string @s
 *
 * @s: pointer to string
 *
 * Return: len (success)
 */

int _strlen(char *s)
{
	int len = 0;
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}

	return (len);
}

/**
 * print_rev - Uses specifier "r" to reverse a string
 *
 * @args: Points to parament in the argument list
 *
 * Return: The string in reverse
 */

int print_rev(va_list params)
{
        char *s = va_arg(params, char *);

	int i = 0;
	int len = 0;

        if (s)
        {
                for (len = _strlen(s) - 1; len >= 0; len--)
                {
                        _putchar(s[len]);
                        i++;
                }
        }

        return (i);

}
