#include "main.h"

/**
 * print_percent - prints the literal %
 * @content: array values
 * Return: int value
 */

int print_percent(va_list content __attribute__((unused)))
{
	char c = '%';

	write(1, &c, 1);
	return (1);
}
