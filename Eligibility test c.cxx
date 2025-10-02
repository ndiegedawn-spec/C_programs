/*
Gabriel Dawn
Reg no:PA106/G/28836/25
Eligibility Test
*/
#include <stdio.h>
int main()
//input
{
    int average_marks, attendance;
    printf("\n Enter you average marks: ");
    scanf("%d", &average_marks);
    printf("\n Enter attendance:");
    scanf("%d", &attendance);
    //conditions 
    if (attendance >= 75 && average_marks >= 40)
    {
        printf("Eligible ");
    }
    else
    {
        printf("Not Eligible ");
    }
    return 0;
}