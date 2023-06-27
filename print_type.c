#include "main.h"

/**
 * print_type - prints output according to type
 * @type: type to convert to
 * @params: array of input
 * @pos: pointer to index of format
 * Return: 0 if success
 */

int print_type(char type, va_list params, int *pos)
{
	int i = 0;

	print_func_t printers[] = {
		{'c', print_char}, {'s', print_string}, {'%', print_percent},
		{'d', print_int}, {'i', print_int}, {'b', print_binary}
	};

	for (; (printers[i].type != '\0'); i++)
	{
		if (type == printers[i].type)
		{
			*pos = *pos + 1;
			return (printers[i].func(params));
		}
	}

	if (type == '\0')
		return (-1);

	return (printers[2].func(params));
}
