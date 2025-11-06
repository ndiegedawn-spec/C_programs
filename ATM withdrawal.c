#include<stdio.h>

int main()
{
int account_balance=1000,amount_withdrawn,New_balance;

    
    account_balance=1000;
    while (account_balance>0){
    printf("\n%d",account_balance);
    printf("\nEnter amount to withdraw:");
    scanf("%d",&amount_withdrawn);
    New_balance=account_balance-amount_withdrawn;
    account_balance=New_balance;
    printf("\n%d",New_balance);}
    return 0;
}