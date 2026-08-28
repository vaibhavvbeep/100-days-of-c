/* Write a program to find profit or loss percentage given cost price and selling price. */
#include <stdio.h>
int main(void){double cost,sale; if(scanf("%lf %lf",&cost,&sale)!=2||cost<=0)return 1; if(sale>cost)printf("Profit %.10g%%\n",(sale-cost)*100/cost); else if(sale<cost)printf("Loss %.10g%%\n",(cost-sale)*100/cost); else puts("No Profit No Loss"); return 0;}
