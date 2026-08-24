/* Write a program to input three numbers and find the largest among them using if–else. */
#include <stdio.h>
int main(void){ double a,b,c,largest; if(scanf("%lf %lf %lf",&a,&b,&c)!=3)return 1; largest=a>b?a:b; if(c>largest)largest=c; printf("Largest is %.10g\n",largest); return 0; }
