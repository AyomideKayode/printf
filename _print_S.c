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
	unsigned char ch, hex1, hex2;

	str = va_arg(args_p, char *);

	if (!str)
		return (-1);

	for (i = 0; str[i]; i++)
	{
		if ((str[i] > 0 && str[i] < 32) || str[i] >= 127)
		{
			ch = (unsigned char)str[i];
			hex1 = (ch >> 4) & 0xF;
			hex2 = ch & 0xF;

			_putchar('\\');
			_putchar('x');
			_putchar(hex1 < 10 ? hex1 + '0' : hex1 - 10 + 'A');
			_putchar(hex2 < 10 ? hex2 + '0' : hex2 - 10 + 'A');
		}
		else
		{
			_putchar(str[i]);
			len++;
		}
	}

	return (len);
}
