/* Write a program to calculate simple and compound interest for given principal, rate, and time. */
#include <stdio.h>
#include <math.h>

int main(void)
{
    double principal, rate, time;
    if (scanf("%lf %lf %lf", &principal, &rate, &time) != 3 || principal < 0 || rate < 0 || time < 0) {
        return 1;
    }
    printf("Simple Interest=%.10g, Compound Interest=%.10g\n", principal * rate * time / 100.0,
           principal * (pow(1.0 + rate / 100.0, time) - 1.0));
    return 0;
}
