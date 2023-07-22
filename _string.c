#include "printf.h"
/**
 */

int _print_string(char *s)
{
	int i = 0;

	if (s)
	{
		while (s[i])
		{
			_putchar(s[i]);
			i++;
			printf("%d\n", i);
		}
		return (i - 1);
	}
}
