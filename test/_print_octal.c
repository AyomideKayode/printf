#include "main.h"

/**
 * _print_octal - print the octal representation
 * of an unsigned number.
 * @args_p: va_list argument containing the unsigned
 * integer to print.
 *
 * Return: the length of converted digits.
 */
int _print_octal(va_list args_p)
{
	unsigned int temp;
	unsigned int n = va_arg(args_p, unsigned int);
	int i, len = 0;
	char *s = NULL;

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}

	temp = n;
	while (temp > 0)
	{
		len++;
		temp >>= 3;
	}

	s = malloc(sizeof(char) * (len + 1));
	if (!s)
		return (-1);

	for (i = len - 1; i >= 0; i--)
	{
		s[i] = '0' + (n & 7);
		n >>= 3;
	}

	s[len] = '\0';

	for (i = 0; i < len; i++)
	{
		_putchar(s[i]);
	}

	free(s);
	return (len);
}

