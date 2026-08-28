/* Write a program to calculate electricity bill based on units consumed with these rates: First 100 units at ₹5/unit, Next 100 units at ₹7/unit, Next 100 units at ₹10/unit, Above at ₹12/unit. */
#include <stdio.h>
int main(void){long long u,b; if(scanf("%lld",&u)!=1||u<0)return 1; b=(u>100?500:u*5); if(u>100)b+=(u>200?700:(u-100)*7); if(u>200)b+=(u>300?1000:(u-200)*10); if(u>300)b+=(u-300)*12; printf("Bill: %lld\n",b); return 0;}
