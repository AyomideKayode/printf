#include "main.h"

/**
 * _base_len - length of digits after conversion
 * from integer to any base.
 * @n: the number to convert.
 * @base: the base to be converted to.
 * Return: the length of converted digits.
 */
int _base_len(unsigned int n, int base)
{
	int len = 0;

	while (n > 0)
	{
		n /= base;
		len++;
	}

	return (len);
}
