#include<stdio.h>
#include<math.h>

int main(){
    int choice;
    double a, b, result;

    printf("Select Operation:\n");
    printf("1.Add\n2.Subtract\n3.Multiply\n4.Divide\n");
    printf("5.Sqrt\n6.Power\n7.Log10\n8.Absolute\n");
    printf("9.Sin\n10.Cos\n11.Tan\n");
    printf("Enter Choice: ");
    scanf("%d",&choice);

    switch(choice){

        case 1:
            printf("Enter two numbers: ");
            scanf("%lf %lf",&a,&b);
            result = a + b;
            printf("Result: %.2lf", result);
            break;

        case 2:
            printf("Enter two numbers: ");
            scanf("%lf %lf",&a,&b);
            result = a - b;
            printf("Result: %.2lf", result);
            break;

        case 3:
            printf("Enter two numbers: ");
            scanf("%lf %lf",&a,&b);
            result = a * b;
            printf("Result: %.2lf", result);
            break;

        case 4:
            printf("Enter two numbers: ");
            scanf("%lf %lf",&a,&b);
            if(b == 0){
                printf("Division by zero not allowed");
            }
            else{
                result = a / b;
                printf("Result: %.2lf", result);
            }
            break;

        case 5:
            printf("Enter number: ");
            scanf("%lf",&a);
            if(a < 0){
                printf("Square root of negative not allowed");
            }
            else{
                result = sqrt(a);
                printf("Result: %.2lf", result);
            }
            break;

        case 6:
            printf("Enter base and power: ");
            scanf("%lf %lf",&a,&b);
            result = pow(a,b);
            printf("Result: %.2lf", result);
            break;

        case 7:
            printf("Enter number: ");
            scanf("%lf",&a);
            if(a <= 0){
                printf("Log of zero or negative not allowed");
            }
            else{
                result = log10(a);
                printf("Result: %.2lf", result);
            }
            break;

        case 8:
            printf("Enter number: ");
            scanf("%lf",&a);
            result = fabs(a);
            printf("Result: %.2lf", result);
            break;

        case 9:
            printf("Enter number (in radians): ");
            scanf("%lf",&a);
            result = sin(a);
            printf("Result: %.2lf", result);
            break;

        case 10:
            printf("Enter number (in radians): ");
            scanf("%lf",&a);
            result = cos(a);
            printf("Result: %.2lf", result);
            break;

        case 11:
            printf("Enter number (in radians): ");
            scanf("%lf",&a);
            result = tan(a);
            printf("Result: %.2lf", result);
            break;

        default:
            printf("Invalid Choice");
    }

    return 0;
}
