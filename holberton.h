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
int print_string(va_list args);
int print_perc(va_list args);
int print_rev(va_list args);
int _strlen(char *s);
int _intlen(int n);
int print_numbers(va_list args);
int print_recursive(unsigned int n);
int print_rot13(va_list args);
#endif
