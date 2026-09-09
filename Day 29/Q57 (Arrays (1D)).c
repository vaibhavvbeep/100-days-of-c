/* Find the sum of array elements. */
#include <stdio.h>
int main(void){int n,x;long long sum=0;if(scanf("%d",&n)!=1||n<1||n>100)return 1;for(int i=0;i<n;i++){if(scanf("%d",&x)!=1)return 1;sum+=x;}printf("%lld\n",sum);return 0;}
