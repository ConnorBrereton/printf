#include "holberton.h"

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
	char *buffer[1];

	buffer[0] = va_arg(params, int);

	write(1, buffer, sizeof(char));

	return (0);
}

/**
 * print_1char - prints one char
 *
 * @s: points to the first char
 *
 * Return: 0 (success)
 */

int print_1char(const char *s)
{
	write(1, s, sizeof(char));
}

/**
 * print_string - prints one char
 *
 * @s: points to the first char
 *
 * Return: 0 (success)
 */

int print_string(va_list params)
{

