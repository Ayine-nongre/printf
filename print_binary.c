#include "main.h"

/**
 * print_binary - prints a binary number
 * @content: array values
 * Return: int value
 */

int print_binary(va_list content)
{
	int num = va_arg(content, int);

	long bin = 0;
	int rem;
	int i = 1;
	int count = 0;

	while (num != 0)
	{
		rem = num % 2;
		num /= 2;
		bin += rem * i;
		i *= 10;
	}

	count = positive(bin);
	return (count);
}
