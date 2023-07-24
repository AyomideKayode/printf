#include "main.h"

/**
 * _recursive_binary - print converted integer to binary.
 * @n: integer to be converted to binary.
 *
 * Return: nothing.
 */
void _recursive_binary(unsigned int n)
{
	if (n > 1)
		_recursive_binary(n / 2);
	_putchar('0' + n % 2);
}

/**
 * _print_binary - print the converted integer from
 * arguement to binary.
 * @args_p: argument parameter to convert.
 *
 * Return: length of binary digit
 */
int _print_binary(va_list args_p)
{
	unsigned int n;
	int len;

	n = va_arg(args_p, unsigned int);

	if (n == 0)
		return (0);

	if (n < 0)
		return (-1);

	len = _base_len(n, 2);
	_recursive_binary(n);
	return (len);
}
