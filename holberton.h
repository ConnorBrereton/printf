#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_
#include <stdarg.h>
/**
 * struct pt - Structure to printf function
 * @pt: print type
 * @f: function
 */
typedef struct pt
{
        char *pt;
        int (*f)(va_list);
} pt_t;
int _printf(const char *format, ...);
int _putchar(char c);
int print_char(va_list args);
int print_str(va_list args);
int print_perc(va_list args);
int print_decimal(va_list args);
int print_1char(const char *);
#endif
