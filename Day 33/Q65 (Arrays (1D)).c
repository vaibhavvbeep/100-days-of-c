/* Search in a sorted array using binary search. */
#include <stdio.h>
int main(void){int n,a[100],t,l=0,r,at=-1;if(scanf("%d",&n)!=1||n<1||n>100)return 1;for(int i=0;i<n;i++)if(scanf("%d",&a[i])!=1)return 1;if(scanf("%d",&t)!=1)return 1;r=n-1;while(l<=r){int m=l+(r-l)/2;if(a[m]==t){at=m;break;}if(a[m]<t)l=m+1;else r=m-1;}if(at<0)puts("-1");else printf("Found at index %d\n",at);return 0;}
