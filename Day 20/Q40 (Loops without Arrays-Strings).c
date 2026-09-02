/* Write a program to find the 1’s complement of a binary number and print it. */
#include <stdio.h>
#include <string.h>
int main(void){char b[1024];if(scanf("%1023s",b)!=1)return 1;for(size_t i=0;i<strlen(b);i++){if(b[i]!='0'&&b[i]!='1')return 1;b[i]=b[i]=='0'?'1':'0';}puts(b);return 0;}
