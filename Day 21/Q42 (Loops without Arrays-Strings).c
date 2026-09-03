/* Write a program to check if a number is a perfect number. */
#include <stdio.h>
int main(void){long long n,sum=1;if(scanf("%lld",&n)!=1||n<2)return 1;for(long long i=2;i<=n/i;i++)if(n%i==0)sum+=i+(i==n/i?0:n/i);puts(sum==n?"Perfect number":"Not perfect number");return 0;}
