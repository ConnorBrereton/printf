#include "holberton.h"
#include <unistd.h>
#include <stdio.h>
/**
 */
int print_char(va_list args)
{
	char c = va_arg(args, int);

	write(1, &c, 1);

	return (0);
}

int print_perc(va_list args)
{
	(void)args;
	_putchar('%');
	return(0);
}

int print_string(va_list args)
{
	char *str = va_arg(args, char*);

	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}

	if (str == NULL)
	{
		str = "(null)";
	}
	return (i);

}
