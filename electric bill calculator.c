/*
Gabriel Dawn
Reg No:PA106/28836/25
a function or Electric bill calculator 
*/


#include<stdio.h>
int totalbill(int units);
int main(void)
{
int units;
int totalbill;
    printf("Enter units consumed:");
    scanf("%d",&units);
    if (units<=100)
{totalbill=units*10;}
else if (units<=200){
totalbill=units*15;
}
else{
totalbill=units*20;
}
    printf("total bill is, ksh.%d",totalbill);
    return 0;
}
totalbill(int units)
{

return "totalbill";

}