#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_
#include <stdarg.h>

/**
 * struct types - holds the argument type
 * and pointer to function with argument
 * type (our list of parameters).
 *
 * @type: ptr to the char identifier
 *
 * @f: pointer to function of params
 * in the ellipse.
 */

typedef struct types
{
	char *type;
	int (*f)(va_list params);
} type_s;

int print_char(va_list);
int print_string(va_list);
int print_numbers(va_list params);
int print_recursive(unsigned int n);
int _intlen(int n);
int _printf(const char *format, ...);
int _strlen(char *s);
int _putchar(char c);
int getter(const char *format, va_list params, int i);

#endif
