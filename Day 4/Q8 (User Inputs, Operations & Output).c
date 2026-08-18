/* Write a program to find and display the sum of the first n natural numbers. */
#include <stdio.h>

int main(void)
{
    unsigned long long n;
    if (scanf("%llu", &n) != 1) {
        return 1;
    }
    printf("Sum=%llu\n", n * (n + 1ULL) / 2ULL);
    return 0;
}
