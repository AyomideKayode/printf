#include "main.h"
/**
 */

int _print_string(char *s)
{
	unsigned int i = 0, str_val = 0;

	if (s)
	{
		while (s[i] != '\0')
		{
			_putchar(s[i]);
			str_val += 1;
			i++;
		}
		//return (i);
	}
	return (str_val);
}
