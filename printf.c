#include "holberton.h"
#include <unistd.h>
#include <stdio.h>

/**
* print_decimal - prints char stream
*
* @args: input stream
*
* Return: input stream
*/

int print_char(va_list args)
{
        char c = va_arg(args, int);
        write(1, &c, 1);
        return(c);
}

/**
* print_decimal - prints percentage stream
*
* @args: input stream
*
* Return: 0 (success)
*/
int print_perc(va_list args)
{
        (void)args;
        _putchar('%');
        return(0);
}

/**
* print_str - prints string stream
*
* @args: input stream
*
* Return: input stream
*/
int print_str(va_list args)
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
