#include "holberton.h"
#include <unistd.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * _printf - The function compares the input stream @format against @specs
 * and executes the matched function type.
 *
 * @format: the input stream
 *
 * @specs: array of structs
 *
 * Return - Specifier ex: printf("Specifier")
 */

int _printf(const char *format, ...)
{
        int idx, specs_id, count;
        va_list args;
        pt_t specs[] = {
                {"c", print_char},
                {"s", print_str},
                {"%", print_perc},
                {'\0', NULL}
        };

        va_start(args, format);

        if (format == NULL)
                return (-1);

        for (idx = 0; format [idx] != '\0'; idx++)
        {
                if (format[idx] == '%')
                {
                        idx ++;
                        specs_id = 0;
                        while (specs[specs_id].pt != NULL)
                        {
                                if(*(specs[specs_id].pt) == format[idx])
                                        count += specs[specs_id].f(args);
                                specs_id++;
                        }
                        if (format[idx] == ' ' || format[idx] ==  '\0')
                        {
                                return (-1);
                        }
                }
                if (format[idx] != '%' && format [idx] != '\0')
                {
                        count += _putchar(format[idx]);
                }
        }
        va_end(args);

        return(count);
}
