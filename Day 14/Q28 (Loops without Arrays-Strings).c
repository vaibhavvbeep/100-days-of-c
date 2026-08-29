/* Write a program to print the product of even numbers from 1 to n. */
#include <stdio.h>
int main(void){unsigned long long n,p=1;if(scanf("%llu",&n)!=1)return 1;for(unsigned long long i=2;i<=n;i+=2)p*=i;printf("%llu\n",p);return 0;}
