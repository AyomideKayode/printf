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
