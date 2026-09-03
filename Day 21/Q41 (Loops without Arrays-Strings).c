/* Write a program to swap the first and last digit of a number. */
#include <stdio.h>
int main(void){long long n,p=1,first,last,result;if(scanf("%lld",&n)!=1||n<0)return 1;if(n<10){printf("%lld\n",n);return 0;}last=n%10;while(p<=n/10)p*=10;first=n/p;result=n-first*p-last+last*p+first;printf("%lld\n",result);return 0;}
