/*
Gabriel Dawn 
Reg no:PA106/G/28836/25
program to display data bundle menu
*/
#include <stdio.h>
int main()

{
    int choice;

    printf("----Data bundle display\n--------");
    printf("1:  100MB - 50 KES \n");
    printf("2:    500MB - 200 KES\n");
    printf("3:    1GB   - 350 KES\n");
    printf("4:     2GB  -  600 KES\n");
    printf("------------------------------------------------\n");

    //input
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    //conditiion
    switch (choice)
    {
    case 1:
        printf("you have select 100MB.cost:50KES\n");
        break;
    case 2:
        printf("you have selected 500MB.cost:200 KES\n");
        break;
    case 3:
        printf("you have selected 1GB.cost:350 KES\n");
        break;
    case 4:
        printf("you have selected 2GB.cost:600\n");
        break;
    default:
        printf(" invalid choice! enter between 1and 4\n");
    }

    return 0;
}