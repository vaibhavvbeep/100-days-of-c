/* Write a program to print the following pattern: 5\n45\n345\n2345\n12345 */
#include <stdio.h>
int main(void){for(int r=5;r>=1;r--){for(int c=r;c<=5;c++)printf("%d",c);putchar('\n');}return 0;}
