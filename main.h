#ifndef _MAIN_
#define _MAIN_

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

typedef struct print_func print_func_t;

/**
 * struct print_func - Structure to take care of printing
 * @type: value type
 * @func: function pointer
 */
struct print_func
{
	char type;
	int (*func)(va_list params);
};

int print_type(char type, va_list params);
int print_char(va_list content);
int print_string(va_list content);
int _printf(const char *format, ...);

#endif

