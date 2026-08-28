/* Write a program to calculate library fine based on late days as follows: First 5 days late: ₹2/day, Next 5 days late: ₹4/day, Next 20 days late: ₹6/day, More than 30 days: Membership Cancelled. */
#include <stdio.h>
int main(void){int d,fine=0; if(scanf("%d",&d)!=1||d<0)return 1; if(d>30)puts("Membership Cancelled"); else {fine=(d>5?10:d*2); if(d>10)fine+= (d-10)*6; else if(d>5)fine+=(d-5)*4; printf("Fine %d\n",fine);} return 0;}
