#ifndef _HOLBERTON_H
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
int print_decimal(va_list);
int print_1char(const char *);
int _printf(const char *format, ...);
int _strlen(char *s);
int _intlen(int n);

#endif
