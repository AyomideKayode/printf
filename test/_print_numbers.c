#include "main.h"
/**
 * _print_numbers - prints numbers recieved as arguments
 * @args_p: va_list arguement containing the numbers to print.
 *
 * Thi function handles the '%d' and '%i' format and prints a signed integer.
 * If the number is negative, it prints a minus sign '-' before the digits.
 * Return: Number of digits printed (excluding the minus sign).
 */
int _print_numbers(va_list args_p)
{
	int n;
	int div;
	int len;
	unsigned int num;

	n  = va_arg(args_p, int);
	div = 1;
	len = 0;

	/* Check if the number is negative */
	if (n < 0)
	{
		len += _putchar('-'); /* print the minus sign */
		num = n * -1; /* convert to positive value for processing */
	}
	else
		num = n;

	/* Calculate the divisor to extract digits from the number*/
	for (; num / div > 9; )
		div *= 10;

	/* Extract each digit and print it */
	for (; div != 0; )
	{
		len += _putchar('0' + num / div); /* print the digit */
		num %= div; /* remove the printed digit from the number */
		div /= 10; /* update the divisor for the next digit*/
	}
	return (len); /* added line to return number of digits printed */
}

/**
 * _print_unsigned_number - Prints an unsigned number.
 * @n: unsigned integer to be printed.
 *
 * This function handles the '%u' format specifier and prints an unsigned int.
 * Return: The number of digits printed.
 */
int _print_unsigned_number(unsigned int n)
{
	int div;
	int len;
	unsigned int num;

	div = 1;
	len = 0;

	num = n;

	/* Calculate the divisor to extract digits from the number*/
	for (; num / div > 9; )
		div *= 10;

	/* Extract each digit and print it */
	for (; div != 0; )
	{
		len += _putchar('0' + num / div);
		num %= div;
		div /= 10;
	}

	return (len);
}
