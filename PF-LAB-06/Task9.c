#include <stdio.h>

int main()
{
    int n;
    int i;
    int total = 0;

    printf("Enter number of tickets: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        total = total + (i * 100);
    }

    printf("Total revenue: %d", total);

    return 0;
}
