#include <stdio.h>

int main()
{
    int rating;
    int ex = 0;
    int sat = 0;
    int imp = 0;

    printf("Enter rating: ");
    scanf("%d", &rating);

    while(rating != -1)
    {
        if(rating >= 85)
        {
            ex = ex + 1;
        }
        else if(rating >= 60)
        {
            sat = sat + 1;
        }
        else
        {
            imp = imp + 1;
        }

        printf("Enter rating: ");
        scanf("%d", &rating);
    }

    printf("Excellent: %d\n", ex);
    printf("Satisfactory: %d\n", sat);
    printf("Needs Improvement: %d\n", imp);

    return 0;
}
