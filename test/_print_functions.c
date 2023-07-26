#include "main.h"
/**
 * _print_string - Handles the '%s' format specifier and prints a string.
 * @args_p: va_list arguement containing the string to print.
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

/* Print each character of the string and update the character count (i)*/
	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}

	return (i);
}

/**
 * _print_char - Handles the '%c' format specifier and print single character.
 * @args_p: va_list argument containing the character to print.
 *
 * Return: Always returns 1 (indicating 1 character printed).
 */
int _print_char(va_list args_p)
{
	_putchar(va_arg(args_p, int));
	return (1);
}

/**
 * _print_cent - Handles the '%%' format specifier and print percetnage sign.
 * @args_p: va_list argument (not used).
 *
 * Return: Always returns 1 (indicating 1 character printed).
 */
int _print_cent(va_list args_p)
{
	(void)args_p; /* Silence unused parameter warning */
	_putchar('%');
	return (1);
}

/**
 * _print_int - Handles the '%d' and '%i' format specifier and print integer.
 * @args_p: va_list argument containing the integer to print.
 *
 * Return: length/number of digits printed.
 */
int _print_int(va_list args_p)
{
	int n;

	/* Call the helper function _print_numbers to handle integer printing*/
	n = _print_numbers(args_p);
	return (n);
}
/**
 * unsigned_int - Handles the '%u' format specifier and print unsigned integer.
 * @args_p: va_list argument containing the unsigned integer to print.
 *
 * Return: length/number of unsigned digits printed.
 */
int unsigned_int(va_list args_p)
{
	unsigned int n;

	/* Get the unsigned integer from va_list */
	n = va_arg(args_p, unsigned int);

	if (n == 0)
		return (_print_unsigned_number(n));

	if (n < 1)
		return (-1);
	return (_print_unsigned_number(n));
}
