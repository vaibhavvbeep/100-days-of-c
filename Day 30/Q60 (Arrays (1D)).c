/* Count positive, negative, and zero elements in an array. */
#include <stdio.h>
int main(void){int n,x,p=0,ne=0,z=0;if(scanf("%d",&n)!=1||n<1||n>100)return 1;for(int i=0;i<n;i++){if(scanf("%d",&x)!=1)return 1;if(x>0)p++;else if(x<0)ne++;else z++;}printf("Positive=%d, Negative=%d, Zero=%d\n",p,ne,z);return 0;}
