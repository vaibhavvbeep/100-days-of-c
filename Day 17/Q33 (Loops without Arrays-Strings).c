/* Write a program to check if a number is an Armstrong number. */
#include <stdio.h>
int main(void){long long n,t,d=0,sum=0;if(scanf("%lld",&n)!=1||n<0)return 1;t=n;do{d++;t/=10;}while(t);t=n;do{long long x=t%10,p=1;for(long long i=0;i<d;i++)p*=x;sum+=p;t/=10;}while(t);puts(sum==n?"Armstrong":"Not Armstrong");return 0;}
