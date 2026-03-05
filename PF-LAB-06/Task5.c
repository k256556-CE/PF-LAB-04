#include <stdio.h>

int main()
{
    int units;
    int total = 0;
    int count = 0;
    float avg;

    printf("Enter units: ");
    scanf("%d", &units);

    while(units != -999)
    {
        total = total + units;
        count = count + 1;

        printf("Enter units: ");
        scanf("%d", &units);
    }

    avg = total / count;

    printf("Average consumption: %.2f", avg);

    return 0;
}
