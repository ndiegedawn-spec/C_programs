/*
program for grading 
Gyron gree on it
*/
#include<stdio.h>
int main()
{
	int marks;
printf("Enter_your_marks:");
scanf("%d ",&marks);
//conditions 
if(marks>=70){
    printf ("\n A",marks);}
    else if(marks>=65){
        printf("\n B",marks);}
        
        else if(marks>=40){
            printf ("\nC",marks);}
            else
            {printf ("\n D",marks);}
            
            return 0;
            

	
	
}