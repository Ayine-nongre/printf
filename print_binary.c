#include "main.h"

/**
 * print_binary - prints a binary number
 * @content: array values
 * Return: int value
 */

int print_binary(va_list content)
{
	int num = va_arg(content, int);
	int temp = num;
	int rem;
	int i = 0;
	int count = 0;
	char *arr;

	while (temp != 0)
	{
		temp /= 2;
		count++;
	}

	arr = malloc(sizeof(char) * count);

	while (num != 0)
	{
		rem = num % 2;
		num /= 2;
		arr[i] = rem + 48;
		i++;
	}

	while (i >= 0)
	{
		write(1, &arr[i], 1);
		i--;
	}
	return (count);
}
