#include "holberton.h"

/**
 * print_rev - Uses specifier "r" to reverse a string
 *
 * @args: Points to parament in the argument list
 *
 * Return: The string in reverse
 */

int print_rev(va_list args)
{
	char *str = va_arg(args, char *);
	int i, len;

	if (str)
	{
		for (len = _strlen(str) - 1; len >= 0; len--)
		{
			_putchar(str[len]);
			i++;
		}
	}

	return (i);

}
