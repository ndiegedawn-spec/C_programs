/*
Gabriel Dawn
Reg no: PA106/G/28836/25
*/
#include<stdio.h>
int main()
{
	int Attendance, Average_marks;
	printf ("\nEnter your attendance percentage:");
	scanf("%d ", &Attendance);
	printf("\nEnter your Average marks:");
	scanf("%d",&Average_marks);
	
	//conditions 
	if(Attendance>=75 && Average_marks>=40){
	    printf("Eligible ");}
	    else {printf("Not Eligible");}
	    
	    return 0 ;
	
}