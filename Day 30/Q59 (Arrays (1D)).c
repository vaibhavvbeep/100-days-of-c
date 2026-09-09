/* Count even and odd numbers in an array. */
#include <stdio.h>
int main(void){int n,x,e=0,o=0;if(scanf("%d",&n)!=1||n<1||n>100)return 1;for(int i=0;i<n;i++){if(scanf("%d",&x)!=1)return 1;if(x%2)e++;else o++;}printf("Even=%d, Odd=%d\n",o,e);return 0;}
