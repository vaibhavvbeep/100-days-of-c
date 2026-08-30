/* Write a program to take a number as input and print its equivalent binary representation. */
#include <stdio.h>
int main(void){unsigned long long n;char b[65];int i=0;if(scanf("%llu",&n)!=1)return 1;do{b[i++]=(char)('0'+n%2);n/=2;}while(n);while(i)putchar(b[--i]);putchar('\n');return 0;}
