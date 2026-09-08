/* Write a program to print the following pattern:   *\n  ***\n *****\n*******\n *****\n  ***\n   * */
#include <stdio.h>
int main(void){for(int r=1;r<=7;r++){int width=r<=4?2*r-1:15-2*r;int spaces=(7-width)/2;for(int c=0;c<spaces;c++)putchar(' ');for(int c=0;c<width;c++)putchar('*');putchar('\n');}return 0;}
