/* Write a program to check if a number is a strong number. */
#include <stdio.h>
int main(void){long long n,t,sum=0;if(scanf("%lld",&n)!=1||n<0)return 1;t=n;do{int d=(int)(t%10);int f=1;for(int i=2;i<=d;i++)f*=i;sum+=f;t/=10;}while(t);puts(sum==n?"Strong number":"Not strong number");return 0;}
