/* program to prompt user to enteryour height, your ID number,your Bank balance
 
 Name : Gabriel Dawn 
 Reg No: PA106/G/28836/25
*/

 #include<stdio.h>
   
   int main()
   
{
	int height,ID_number ;
	float Bank_balance ;
	printf("Enter your height: ");
	scanf("%d",&height);
	printf("Enter your ID_number: ");
	scanf("%d",&ID_number);
	printf("Enter your Bank_balance: ");
	scanf("%2f",&Bank_balance );
	//system output
	
	printf("\nYour height,ID_number,Bank_balance is%d,%d,%2f",height,ID_number, Bank_balance);
	return 0 ;
}