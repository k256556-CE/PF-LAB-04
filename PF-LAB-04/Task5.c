#include<stdio.h>
#include<string.h>
int main()
{
    int option, balance = 30000, withdrawal,deposite;
    printf("Menu\n1.Balance Inquiry\n2.Cash Withdrawal\n3.Cash Deposite\n4.Exit\n");
    printf("Select Option: ");
    scanf("%d",&option);
    
    switch (option){
        case 1:
        if(option == 1){
            printf("Balance: %d",balance);
        }
        break;
        case 2:
        if(option == 2){
            printf("Enter Amount: ");
            scanf("%d",&withdrawal);
            if (withdrawal > balance){
                printf("Insufficient Balance");
            }
            else {
                balance = balance - withdrawal;
            printf("Transaction Successful\nBalance: %d",balance);
            }
        }
        break;
        case 3:
        if(option == 3){
            printf("Enter Amount: ");
            scanf("%d",&deposite);
            balance = balance + deposite;
            printf("Transaction Successful\nBalance: %d",balance);
        }
        break;
        
    }
    
    return 0;
}
