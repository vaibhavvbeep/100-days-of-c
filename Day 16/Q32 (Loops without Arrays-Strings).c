/* Write a program to check if a number is a palindrome. */
#include <stdio.h>
int main(void){long long n,o,r=0;if(scanf("%lld",&n)!=1||n<0)return 1;o=n;do{r=r*10+n%10;n/=10;}while(n);puts(o==r?"Palindrome":"Not palindrome");return 0;}
