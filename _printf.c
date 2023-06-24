#include "main.h"

/**
 * _printf - prints formatted output
 * @format: formatting style
 * Return: 0 if success
 */

int _printf(const char *format, ...)
{
	va_list params;
	int i = 0;

	va_start(params, format);
	for (; format && *(format + i) != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			print_type(format[i], params);
		}
		else
		{
			write(1, &format[i], 1);
		}
	}


	va_end(params);
	return (0);
}
