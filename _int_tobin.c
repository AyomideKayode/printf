#include "main.h"

/**
 * _int_tobin - Convert unsigned int to binary and print it.
 * @args_p: Argument list containing the unsigned int to be converted
 * Return: Number of characters printed.
 */
int _int_tobin(va_list args_p)
{
	unsigned int n;
	int len = 0;
	int binary_digits[32]; /* make we assume 32-bit integers (adjust if needed) */

	n = va_arg(args_p, unsigned int);

	/* Edge case for input value of 0 */
	if (n == 0)
	{
		len += _putchar('0');
		return (len);
	}
	/* Convert the unsigned integer to binary representation */
	int i = 0;

	while (n > 0)
	{
		binary_digits[i] = n % 2;
		n = n / 2;
		len++;
		i++;
	}
	/*Print the binary representation in reverse order using a while loop*/
	i = len - 1;
	while (i >= 0)
	{
		_putchar('0' + binary_digits[i]);
		i--;
	}
	return (len);
}
