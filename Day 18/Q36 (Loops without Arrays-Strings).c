/* Write a program to find the HCF (GCD) of two numbers. */
#include <stdio.h>
int main(void){long long a,b,t;if(scanf("%lld %lld",&a,&b)!=2)return 1;if(a<0)a=-a;if(b<0)b=-b;while(b){t=a%b;a=b;b=t;}printf("%lld\n",a);return 0;}
