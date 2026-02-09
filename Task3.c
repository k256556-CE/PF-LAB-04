#include<stdio.h>
int main()
{
    int number;
    printf("Enter Number:");
    scanf("%d",&number);
    if(number > 0){
        printf("Positive");
    }
    else if(number < 0){
        printf("Negative");
    }
    else if(number == 0){
        printf("Zero");
    }
    else {
        printf("Error");
    }
    return 0;
}
