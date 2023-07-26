#include "main.h"

/**
 * _printf - custom printf function that produces output according to a format.
 * @format: format (char, string, int, etc)
 *
 * Return: the number of characters.
 */

int _printf(const char *format, ...)
{
	int n_chars;
	specifier_t f_array[] = {
		{"c", _print_char},
		{"s", _print_string},
		{"%", _print_cent},
		{"d", _print_int},
		{"i", _print_int},
		{"b", _print_binary},
		{"o", _print_octal},
		{"u", unsigned_int},
		{"x", _print_hexadecimal},
		{"X", _print_hexadecimal_X},
		{NULL, NULL}
	};

	va_list args_p;

	if (!format)
		return (-1);

	va_start(args_p, format);
	n_chars = get_function(format, f_array, args_p);
	va_end(args_p);
	return (n_chars);
}
