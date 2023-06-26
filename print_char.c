#include "main.h"

/**
 * print_char - function to print character values
 * @content: an array of values
 * Return: character output
 */

int print_char (va_list content)
{
	char c = va_arg(content, int);

	write(1, &c, 1);
	return (1);
}
