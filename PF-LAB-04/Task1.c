#include<stdio.h>
int main()
{
    float attendance; 
    printf("Enter Attendance %%:");
    scanf("%f", &attendance);
    if (attendance <= 75){
        printf("Not Eligible");
    } 
    else{
        printf("Eligible");
    }


    return 0;
}
