#include "main.h"

/**
 * _print_S - Print a string
 * with special handling for non-printable characters.
 * @args_p: Argument list containing the string to print.
 *
 * Return: The number of characters printed.
 */
int _print_S(va_list args_p)
{
	char *str;
	int i, len = 0;

	str = va_arg(args_p, char *);

	for (i = 0; str[i]; i++)
	{
		if (str[i] < 32 || str[i] >= 127)
			/*if ((str[i] < 32 && str[i] != '\n') || str[i] >= 127)*/
		{
			_putchar('\\');
			_putchar('x');
			if (str[i] < 16)
				_putchar('0');
			len += 3;

			/* Helper function to print two hexadecimal digits.*/
			len += _print_hex_2digits(str[i]);
		}
		/* Handle special case for newline character */
		else if (str[i] == '\n' || str[i] == '\t' || str[i] == '\r')
		{
			_putchar('\\');
			_putchar('x');
			_putchar('O');
			_putchar('A');
			len += 4;

		}
		else
		{
			_putchar(str[i]);
			len++;
		}
	}
	return (len);
}

/**
 * _print_hex_2digits - Print the hexadecimal representation of a number.
 * (Always 2 digits).
 * @num: The number to print in hexadecimal.
 *
 * Return: The number of characters printed (always 2).
 */
int _print_hex_2digits(unsigned char num)
{
	char hex_digits[] = "0123456789ABCDEF";

	_putchar(hex_digits[num / 16]);
	_putchar(hex_digits[num % 16]);
	return (2);
}
