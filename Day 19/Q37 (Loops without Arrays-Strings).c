/* Write a program to find the LCM of two numbers. */
#include <stdio.h>
int main(void){long long a,b,x,y,t;if(scanf("%lld %lld",&a,&b)!=2||a==0||b==0)return 1;x=a<0?-a:a;y=b<0?-b:b;t=y;while(t){long long z=x%t;x=t;t=z;}printf("%lld\n",x==0?0:(a<0?-a:a)/x*y);return 0;}
