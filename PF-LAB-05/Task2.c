#include<stdio.h>
#include<string.h>
int main(){
    int units,bill;
    char customertype[20];
    printf("Enter Units Consumed: ");
    scanf("%d",&units);
    if(units<=100){
        bill = units *10;
        printf("--Rs.10 per unit--\nTotal Bill: %d Rs",bill);
        return 0;
    }
    else if(units>100 && units<=300){
        printf("Enter Customer Type(domestic/commercial): ");
        scanf("%s",customertype);
        if(strcmp(customertype,"domestic")==0){
            bill = units *12;
            printf("--RS.12 per unit--\nTotal Bill: %d Rs",bill);
        }
        else if(strcmp(customertype,"commercial")==0){
            bill = units *15;
            printf("--Rs.15 per unit--\nTotal Bill: %d Rs",bill);
        }
        else{
            printf("Invalid Customer Type");
            return 1;
        }
    }
    else{
        bill = units *20;
        printf("--Rs.20 per unit--\nTotal Bill: %d Rs",bill);
    }
    return 0;
}
