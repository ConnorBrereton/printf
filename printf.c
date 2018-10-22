#include "holberton.h"
#include <stdarg.h>
#include <unistd.h>

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
 * @params: input stream
 *
 * Return: buffer_len (success) 1 (failure)
 */

int print_string(va_list params)
{
	int i, len = 0, buffer_len = 0, count = 0;
	char *buffer;
	char null[5] = "NULL";

	buffer = va_arg(params, char *);
	buffer_len = _intlen(buffer);
	count = sizeof(char) * buffer_len;

	if (!buffer)
	{
		buffer = malloc(sizeof(char) * 5);

		if (buffer == NULL)
		{
			free(buffer);
			return (1);
		}

		while (null[i] != '\0')
		{
			*(buffer + i) = null[i];
			i++;
		}
	}

	write(1, buffer, count);
	return (buffer_len);
}

/**
 * print_decimal - prints decimal stream
 *
 * @params: input stream
 *
 * Return: buffer_len (success) 1 (failure)
 */

int print_decimal(va_list params)
{
	int buffer_len = 0, count = 0;
	int stream;
	char *buffer;

	stream = va_arg(params, int);

	if (stream < 0)
		return (1);

	buffer_len = _intlen(stream);
	buffer = stream;
	count = sizeof(int) * buffer_len;

	write(1, buffer, count);
}
