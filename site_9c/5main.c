// # Variable
#include <stdio.h>

int main(void)
{
    // "declaration"
    // Variable declarations can basically only be made at the begnning of a function.
    // But, in fact, this program works with many compilers.
    // This is because it can be used in "C++" which is an extended version of C language.
    // integer
    int value;
    // "assignment"
    value = 10;
    // "display"
    printf("%d\n", value);
    value += 30;
    printf("%d\n", value);
    value++;
    printf("%d\n", value);
    // real number
    double left, right;
    left = 10;
    right = 3;
    printf("%f\n", left + right);
    // in C language, the result of calculating with integers and real numbers is converted to real numbers.
    printf("%f\n", 1.03 * 9);
    // cast conversion
    printf("%d\n", (int)(1.05 * 360));
    // Aligning integer digits
    int a = 10000, b = 500, c = 3;
    printf("A is %5d.\n", a);
    printf("B is %5d.\n", b);
    printf("C is %5d.\n", c);
    // Computer-like display
    printf("A is %05d.\n", a);
    printf("B is %05d.\n", b);
    printf("C is %05d.\n", c);
    // Aligning real numbers
    // For example, %6.2 interprets the interger part as 3 digits, the decimal point as 1 digit, and the decimal part as 2 digits, 6 digits.
    double pi = 3.14159;
    printf("%6.2f\n", pi);
    printf("123456\n");
    return 0;
}
