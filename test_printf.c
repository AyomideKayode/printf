#include "printf.h"

int main(void)
{
	int rv1, rv2;
	char olix[] = "Olix and Kayode project";
	int c = _putchar('c');
	int c2 = putchar('c');
	char ap = 'G';


// test case for normal C printf()
	puts("\nUsing original printf()\n---");
	rv1 = printf("OlixKay\n");
	printf("rv is %d\n", rv1);
	rv1 = printf("%c olix\n", ap);
	printf("rv1= %d\n", rv1);
	rv1 = printf("This is %s\n", olix);
	printf("rv1= %d\n", rv1);

// Test case for customized printf() function
	puts("\nUsing customized printf()\n---");
	rv2 = _printf("OlixKay\n");
	printf("rv2 is %d\n", rv2);
	rv2 = _printf("%c olix\n", ap);
	printf("rv2= %d\n", rv2);
	rv2 = _printf("This is %s\n", olix);
	printf("rv2= %d\n", rv2);
}
