/* Write a program to input time in seconds and convert it to hours:minutes:seconds format. */
#include <stdio.h>

int main(void)
{
    unsigned long long seconds;
    if (scanf("%llu", &seconds) != 1) {
        return 1;
    }
    printf("%llu:%llu:%llu\n", seconds / 3600ULL, (seconds / 60ULL) % 60ULL, seconds % 60ULL);
    return 0;
}
