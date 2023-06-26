#include "main.h"

/**
 * print_string - prints formatted string
 * @content: array values
 * Return: count of integers
 */

int print_string(va_list content)
{
	char *s = va_arg(content, char *);
	int count = 0;
	unsigned int i;
	char *nul = "(null)";

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
	while (*(s + i) != '\0')
	{
		write(1, &s[i], 1);
		count++;
		i++;
	}

	return (count);
}
