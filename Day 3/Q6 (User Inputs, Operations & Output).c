/* Write a program to swap two numbers using a third variable. */
#include <stdio.h>

int main(void)
{
    double first, second, temporary;
    if (scanf("%lf %lf", &first, &second) != 2) {
        return 1;
    }
    temporary = first;
    first = second;
    second = temporary;
    printf("After swap: %.10g %.10g\n", first, second);
    return 0;
}
