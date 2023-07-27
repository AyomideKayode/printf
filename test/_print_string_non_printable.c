#include "main.h"

/**
 * _print_string_non_printable - Print a string with non-printable characters
 * represented as "\x"
 * followed by their ASCII code value in hexadecimal (uppercase).
 * @args_p: va_list argument containing the string to print.
 *
 * Return: The total number of characters printed.
 */
int _print_string_non_printable(va_list args_p)
{
	unsigned int i, idx = 0, len = 0;
	char *str = va_arg(args_p, char *);
	char *s = NULL;

	if (!str)
	{
		_putchar('(');
		_putchar('n');
		_putchar('u');
		_putchar('l');
		_putchar('l');
		_putchar(')');
		return (6);
	}

	for (i = 0; str[i]; i++)
	{
		if (str[i] >= 32 && str[i] < 127)
			len += 4;
		else
			len++;
	}
	s = malloc(sizeof(char) * (len + 1));
	if (!s)
		return (-1);


	for (i = 0; str[i]; i++)
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			s[idx++] = '\\';
			s[idx++] = 'x';
			s[idx++] = (str[i] >> 4) < 10 ? '0' + (str[i] >> 4) : 'A' + (str[i] >> 4) - 10;
			s[idx++] = (str[i] & 0x0F) < 10 ? '0' + (str[i] & 0x0F) : 'A' + (str[i] & 0x0F) - 10;
			/*if (str[i] < 16)
			  s[idx++] = '0';
			  _print_hexadecimal_X(&s[idx], str[i]);
			  idx += 2;*/
		}
		else
		{
			s[idx++] = str[i];
		}
	}

	s[idx] = '\0';

	for (i = 0; s[i]; i++)
	{
		_putchar(s[i]);
	}

	free(s);
	return (len);
}
