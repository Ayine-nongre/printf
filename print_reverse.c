#include "main.h"

/**
 * print_reverse - prints a string in reverse
 * @content: array param
 * Return: int value
 */

int print_reverse(va_list content)
{
	char *str = va_arg(content, char *);
	int count = 0;

	while (*(str + count) != '\0')
		count++;

	while (count != 0)
	{
		write(1, &str[count], 1);
		count--;
	}

	return (count);
}
