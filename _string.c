#include "main.h"
/**
 */

int _print_string(char *s)
{
	unsigned int i = 0;

	if (s)
	{
		while (s[i])
		{
			_putchar(s[i]);
			i++;
		}
		return (i);
	}
}
