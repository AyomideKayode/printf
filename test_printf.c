#include "printf.h"

int main(void)
{
	int rv, rv2;
	char olix[] = "Olix and Kayode project";
	int c = _putchar('c');
	int c2 = putchar('c');


// test case for normal C printf()
	puts("\nUsing original printf()\n---");
	rv = printf("OlixKay\n");
	printf("rv is %d\n", rv);

// Test case for customized printf() function
	puts("\nUsing customized printf()\n---");
	rv2 = _printf("OlixKay\n");
	printf("rv2 is %d\n", rv2);
}
