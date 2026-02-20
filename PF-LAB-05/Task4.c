#include<stdio.h>
#include<string.h>
int main(){
    int vehicle,parking,fee,hours;
    printf("Main Vehicle Type:\n1.Car\n2.Bike\n3.Bus\n4.Exit\nSelect Option: ");
    scanf("%d",&vehicle);
    switch(vehicle){
        case 1:
        printf("\nParking Type:\n1.Regular Parking\n2.Vip Parking\n3.Exit\nSelect Option: ");
        scanf("%d",&parking);
        switch(parking){
            case 1: 
            printf("Enter Time(hours): ");
            scanf("%d",&hours);
            fee = hours *50;
            printf("--Regular Parking Rs 50 per hour--\nYour Parking fee: %d Rs",fee);
            break;
            case 2:
            printf("Enter Time(hours): ");
            scanf("%d",&hours);
            fee = hours *100;
            printf("--VIP Parking Rs 100 per hour--\nYour Parking fee: %d Rs",fee);
            break;
            case 3:
            return 0;
            default:
            printf("Invalid Choice");
            return 1;
            break;
        }
        break;
        case 2:
        printf("\nParking Type:\n1.Regular Parking\n2.Vip Parking\n3.Exit\nSelect Option:  ");
        scanf("%d",&parking);
        switch(parking){
            case 1: 
            printf("Enter Time(hours): ");
            scanf("%d",&hours);
            fee = hours *20;
            printf("--Regular Parking Rs 20 per hour--\nYour Parking fee: %d Rs",fee);
            break;
            case 2:
            printf("Enter Time(hours): ");
            scanf("%d",&hours);
            fee = hours *40;
            printf("--VIP Parking Rs 40 per hour--\nYour Parking fee: %d Rs",fee);
            break;
            case 3:
            return 0;
            default:
            printf("Invalid Choice");
            return 1;
            break;
        }
        break;
        case 3:
        printf("Enter Time(hours): ");
        scanf("%d",&hours);
        fee = hours *200;
        printf("--Fixed Rate 200 per hour\nYour Parking fee: %d",fee);
        break;
        case 4:
        return 0;
        break;
        default:
        printf("Invalid Choice");
        return 1;
        break;
    }
    
    return 0;
}
