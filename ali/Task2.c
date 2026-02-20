#include<stdio.h>
int main () 
{
    int units = 0;

    printf("Enter Units Consumed:");

    scanf("%d", &units);

    if(units <= 100){
        printf("Low Usage");
    }
    else if(units > 100 && units <= 300){
        printf("Medium Usage");
    }
    else if(units > 300){
        printf("High Usage");
    }
    else {
        printf("Error");
    }
    return 0;
}
