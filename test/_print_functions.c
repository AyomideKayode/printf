#include "main.h"
/**
 * _print_string - print string.
 * @args_p: Arguement string to print.
 *
 * Return: length of string.
 */
int _print_string(va_list args_p)
{
	char *s;
	int i = 0;

	s = va_arg(args_p, char *);
	if (s == NULL)
		s = "(null)";

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}

	return (i);
}

/**
 * _print_char -  print single character.
 * @args_p: argument character to print.
 *
 * Return: Always 1 success
 */
int _print_char(va_list args_p)
{
	_putchar(va_arg(args_p, int));
	return (1);
}

/**
 * _print_cent - print percetnage sign.
 * @args_p: argument sign to print.
 * Return: Always 1 success
 */
int _print_cent(va_list args_p)
{
	(void)args_p;
	_putchar('%');
	return (1);
}

/**
 * _print_int - print integer.
 * @args_p: argument of integer to print.
 * Return: length of digits printed.
 */
int _print_int(va_list args_p)
{
	int n;

	n = _print_numbers(args_p);
	return (n);
}
/**
 * unsigned_int - Prints Unsigned integers
 * @args_p: argument of unsigned ints
 * Return: length of unsigned digits printed
 */
int unsigned_int(va_list args_p)
{
	unsigned int n;

	n = va_arg(args_p, unsigned int);

	if (n == 0)
		return (print_unsgined_number(n));

	if (n < 1)
		return (-1);
	return (print_unsgined_number(n));
}
