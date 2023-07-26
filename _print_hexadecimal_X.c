#include "main.h"
/**
 * _print_hexadecimal_X - print the uppercase
 * hexadecimal representation of an unsigned int.
 * @args_p: argument in hexadecimal to be printed
 *
 * Return: len of converted digits
 */

int _print_hexadecimal_X(va_list args_p)
{
	unsigned int temp;
	unsigned int n = va_arg(args_p, unsigned int);
	int i, digit, len = 0;
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
		temp >>= 4;
	}
	s = malloc(sizeof(char) * (len + 1));
	if (!s)
		return (-1);
	for (i = len - 1; i >= 0; i--)
	{
		digit = n & 15;
		if (digit < 10)
			s[i] = '0' + digit;
		else
			s[i] = 'A' + (digit - 10);
		n >>= 4;
	}
	s[len] = '\0';

	for (i = 0; i < len; i++)
	{
		_putchar(s[i]);
	}
	free(s);
	return (len);
}
