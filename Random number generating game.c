/*
Gabriel Dawn 
Reg No:PA106/G/28836/25
Random number generating game
*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
int guess;
int i;
for (i=1;i<=20;i++)
{
    printf("\nEnter guess: ");
    scanf("%d",&guess);
    
    printf("\n%d",1+(rand()%20));
    if( guess==i){printf("\ncongratulations!");}
    else if (guess>i){printf("\nToo high!");}
    else{printf("\nToo low!");}
    }
    return 0;
}