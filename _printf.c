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
	int data_printed = 0;
	int format_printed = 0;

	if (format == NULL)
		return (-1);

	va_start(params, format);
	for (; format && *(format + i) != '\0'; i++)
	{
		if (format[i] == '%')
		{
			format_printed = print_type(format[i + 1], params, &i);
			data_printed += format_printed;
		}
		else
		{
			write(1, &format[i], 1);
			data_printed++;
		}
	}


	va_end(params);
	return (data_printed);
}
