/* Write a program to check if a number is prime. */
#include <stdio.h>
int main(void){long long n;int p=1;if(scanf("%lld",&n)!=1||n<2)p=0;for(long long i=2;p&&i<=n/i;i++)if(n%i==0)p=0;puts(p?"Prime":"Not prime");return 0;}
