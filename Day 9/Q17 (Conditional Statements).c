/* Write a program to find the roots of a quadratic equation and categorize them. */
#include <stdio.h>
#include <math.h>
int main(void){ double a,b,c,d; if(scanf("%lf %lf %lf",&a,&b,&c)!=3||a==0)return 1; d=b*b-4*a*c; if(d>0)printf("Roots are real and different: %.10g, %.10g\n",(-b+sqrt(d))/(2*a),(-b-sqrt(d))/(2*a)); else if(d==0)printf("Roots are real and same: %.10g\n",-b/(2*a)); else puts("Roots are complex"); return 0; }
