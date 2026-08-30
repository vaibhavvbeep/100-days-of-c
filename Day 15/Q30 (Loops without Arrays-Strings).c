/* Write a program to reverse a given number. */
#include <stdio.h>
int main(void){long long n,r=0,s;if(scanf("%lld",&n)!=1)return 1;s=n<0?-1:1;n*=s;do{r=r*10+n%10;n/=10;}while(n);printf("%lld\n",s*r);return 0;}
