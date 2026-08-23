/* Write a program to input an integer and check whether it is positive, negative or zero using nested if–else. */
#include <stdio.h>
int main(void){ long long n; if(scanf("%lld",&n)!=1)return 1; puts(n>0?"Positive":n<0?"Negative":"Zero"); return 0; }
