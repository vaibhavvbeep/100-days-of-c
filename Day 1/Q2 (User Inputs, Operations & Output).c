/* Write a program to input two numbers and display their sum, difference, product, and quotient. */
#include <stdio.h>

int main(void)
{
    double first, second;
    if (scanf("%lf %lf", &first, &second) != 2) {
        return 1;
    }
    printf("Sum=%.10g, Diff=%.10g, Product=%.10g", first + second, first - second, first * second);
    if (second == 0.0) {
        printf(", Quotient=undefined\n");
    } else {
        printf(", Quotient=%.10g\n", first / second);
    }
    return 0;
}
