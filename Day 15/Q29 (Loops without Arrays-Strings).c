/* Write a program to calculate the factorial of a number. */
#include <stdio.h>
int main(void){unsigned n;unsigned long long f=1;if(scanf("%u",&n)!=1||n>20)return 1;for(unsigned i=2;i<=n;i++)f*=i;printf("%llu\n",f);return 0;}
