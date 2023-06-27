#include "main.h"

/**
 * positive - prints positive values
 * @value: int value
 * Return: int value
 */

int positive(int value)
{
	int count = 1;
	int temp = value;
	int  div = 1;
	int i = 0;

	while (temp > 9)
	{
		temp = temp / 10;
		div *= 10;
		count++;
	}

	temp = 0;
	i = count;

	while (i != 0)
	{
		if (i == 1)
			temp = (value % 10);
		else
		{
			temp = (value / div);
			div /= 10;
			if ((count - i) > 0)
				temp = (temp % 10);
		}
		temp += 48;
		write(1, &temp, 1);
		i--;
	}

	return (count);
}

/**
 * negative - prints positive values
 * @value: int value
 * Return: int value
 */


int negative(int value)
{
	int count = 1;
	int temp = (value / -1);
	int div = 1;
	int i = 0;
	char hypen = 45;

	value = value / -1;

	while (temp > 9)
	{
		temp = temp / 10;
		div *= 10;
		count++;
	}

	temp = 0;
	i = count;
	write(1, &hypen, 1);
	while (i != 0)
	{
		if (i == 1)
			temp = (value % 10);
		else
		{
			temp = (value / div);
			div /= 10;
			if ((count - i) > 0)
				temp = (temp % 10);
		}
		temp += 48;
		write(1, &temp, 1);
		i--;
	}

	return (count + 1);
}

/**
 * print_int - prints decimal values
 * @content: array values
 * Return: int value
 */

int print_int(va_list content)
{
	int num = va_arg(content, int);
	int count = 0;

	if (num >= 0)
		count = positive(num);
	else
		count = negative(num);

	return (count);
}
