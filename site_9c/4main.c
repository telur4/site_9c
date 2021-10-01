// # Display numbers
// The printf functions is just a function that prints a character string.
// But thankfully, it also has the ability to display numbers.
// It able to use the "output conversion specifier" to print numbers with the printf function.
// "Output conversion specifier" : When you want to cenvert external data to a
// character string and display it, this symbol can specifies the conversion method.
#include <stdio.h>

int main(void)
{
    // display numbers
    printf("%dyen\n", 100);
    // use operators
    printf("%d\n", 10 + 3);
    printf("%d\n", 10 - 3);
    printf("%d\n", 10 * 3);
    printf("%d\n", 10 / 3);
    printf("%d\n", 10 % 3);
    // use operator with float type
    printf("%f\n", 10.0 + 3.0);
    printf("%f\n", 10.0 - 3.0);
    printf("%f\n", 10.0 * 3.0);
    printf("%f\n", 10.0 / 3.0);
    return 0;
}

// want to realize to calc float number only use int type, /, % operators
// char[] calc(int num1, int num2, int num3);
