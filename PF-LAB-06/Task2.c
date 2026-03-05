#include <stdio.h>

int main()
{
    int balance;
    int use;

    printf("Enter data balance: ");
    scanf("%d", &balance);

    while(balance > 0)
    {
        printf("Enter data usage: ");
        scanf("%d", &use);

        balance = balance - use;
        printf("Remaining balance: %d\n", balance);
    }

    printf("Data finished");

    return 0;
}
