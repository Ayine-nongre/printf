#include "main.h"

/**
 * print_reverse - prints a string in reverse
 * @content: array param
 * Return: int value
 */

int print_reverse(va_list content)
{
	char *s = va_arg(content, char *);
	int count = 0;
	int i;
	char *nul = "(llun)";

	i = 0;
	if (s == NULL)
	{
		while (i < 6)
		{
			write(1, &nul[i], 1);
			i++;
			count++;
		}
		return (count);
	}

	while (*(s + count) != '\0')
		count++;

	i = count;
	while (i != -1)
	{
		write(1, &s[i], 1);
		i--;
	}

	return (count);
}
