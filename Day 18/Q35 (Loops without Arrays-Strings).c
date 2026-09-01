/* Write a program to print all factors of a given number. */
#include <stdio.h>
int main(void){long long n;if(scanf("%lld",&n)!=1||n<1)return 1;for(long long i=1;i<=n;i++)if(n%i==0)printf("%lld%c",i,i==n?'\n':' ');return 0;}
