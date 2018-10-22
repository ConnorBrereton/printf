#ifndef _PRINTF_H_
#define _PRINTF_H_
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
	void (*f)(va_list params);
} type_s;

void _print_chars(va_list);
void _print_string(va_list);
void _print_decimal(va_list);
void _print_char(const char *);

#endif
