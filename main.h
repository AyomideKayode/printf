#ifndef PRINTF_H
#define PRINTF_H
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * struct specifier - structure to define format specifier and handle function.
 * @sign: contains the format specific char (e.g., "c", "s", "d", etc.).
 * @f: The function associated with format specifier.
 */

struct specifier
{
	char *sign;
	int (*f)(va_list);
};

typedef struct specifier specifier_t;

/* Function Prototypes for the main .c functions */
int _putchar(char c);
int _printf(const char *format, ...);
int get_function(const char *format, specifier_t f_array[], va_list arg_p);
int _print_string(va_list args_p);
int _print_char(va_list args_p);
int _print_cent(va_list args_p);
int _print_numbers(va_list args_p);
int _print_int(va_list args_p);
int unsigned_int(va_list args_p);
int print_unsgined_number(unsigned int n);
int _base_len(unsigned int n, int base);
void _recursive_binary(unsigned int n);
int _print_binary(va_list args_p);

#endif /* PRINTF_H */
