#include "main.h"

/**
 * _print_binary - print the converted integer from
 * arguement to binary.
 * @args_p: argument parameter to convert.
 *
 * Return: length of binary digit
 */

int _print_binary(va_list args_p)
{
	unsigned int temp;
	unsigned int n = va_arg(args_p, unsigned int);
	int len = 0;
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
		temp >>= 1;
	}

	s = malloc(sizeof(char) * (len + 1));
	if (!s)
		return (-1);

	for (int i = len - 1; i >= 0; i--)
	{
		s[i] = (n & 1) ? '1' : '0';
		n >>= 1;
	}

	s[len] = '\0';

	for (int i = 0; i < len; i++)
	{
		_putchar(s[i]);
	}

	free(s);
	return (len);
}

