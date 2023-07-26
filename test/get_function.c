#include "main.h"
/**
 * get_function - Get the main string and all the appr. parameters
 * @format: The format string to be printed.
 * @f_array: Structures Array containing all format specifiers and functions.
 * @arg_p: va_list of arguements parameter.
 * Return: number of characters printed.
 */
int get_function(const char *format, specifier_t f_array[], va_list arg_p)
{
	int i = 0, j, result, n_chars = 0;

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			j = 0;
			while (f_array[j].sign != NULL)
			{
				if (format[i + 1] == f_array[j].sign[0])
				{
					result = f_array[j].f(arg_p);
					if (result == -1)
						return (-1);
					n_chars += result;
					break;
				}
				j++;
			}
			if (f_array[j].sign == NULL && format[i + 1] != ' ')
			{
				if (format[i + 1] != '\0')
				{
					_putchar(format[i]);
					_putchar(format[i + 1]);
					n_chars += 2;
				}
				else
					return (-1);
			}
			i += 1;
		}
		else
		{
			_putchar(format[i]);
			n_chars++;
		}
		i++;
	}
	return (n_chars);
}
