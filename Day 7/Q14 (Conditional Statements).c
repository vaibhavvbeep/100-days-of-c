/* Write a program to input a character and check whether it is a vowel or consonant using if–else. */
#include <stdio.h>
#include <ctype.h>
int main(void){ int c=getchar(); if(!isalpha((unsigned char)c))return 1; c=tolower((unsigned char)c); puts(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'?"Vowel":"Consonant"); return 0; }
