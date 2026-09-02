/* Write a program to find the product of odd digits of a number. */
#include <stdio.h>
int main(void){long long n,p=1;if(scanf("%lld",&n)!=1)return 1;if(n<0)n=-n;do{long long d=n%10;if(d%2)p*=d;n/=10;}while(n);printf("%lld\n",p);return 0;}
