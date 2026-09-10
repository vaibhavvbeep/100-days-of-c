/* Find the digit that occurs the most times in an integer number. */
#include <stdio.h>
int main(void){long long n;int count[10]={0},best=0;if(scanf("%lld",&n)!=1)return 1;if(n<0)n=-n;do{count[n%10]++;n/=10;}while(n);for(int d=1;d<10;d++)if(count[d]>count[best])best=d;printf("%d\n",best);return 0;}
