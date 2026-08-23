/* Write a program to input an integer and check whether it is even or odd using if–else. */
#include <stdio.h>
int main(void){ long long n; if(scanf("%lld",&n)!=1)return 1; printf("%lld is %s\n",n,n%2==0?"even":"odd"); return 0; }
