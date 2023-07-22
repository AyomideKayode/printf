#include "printf.h"

/**
 * _printf - custom printf function that produces output according to a format.
 * @format: format (char, string, int, etc)
 * Return: value of the output text.
 */

int _printf(const char *format, ...)
{
	va_list args_p;
	unsigned int fmt_idx = 0, n_char = 0;

	va_start(args_p, format);

	while (format[fmt_idx])
	{
		if (format[fmt_idx] != '%')
		{
			_putchar(format[fmt_idx]);
			n_char++;
			fmt_idx++;
		}
		else if (format[fmt_idx + 1] == 'c')
		{
			_putchar(va_arg(args_p, int));
			fmt_idx += 2;
			n_char += 1;
		}
		else if (format[fmt_idx + 1] == 's')
		{
			_print_string(va_arg(args_p, char *));
		}


	}
	return (n_char);
}
