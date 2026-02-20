#include<stdio.h>
#include<string.h>
int main()
{
    char username[] = "admin";
    char nameinput[20];
    int password = 1234;
    int passinput;
    printf("Enter Username:\n");
    scanf("%s",&nameinput);
    printf("Enter Password:\n");
    scanf("%d",&passinput);
    
    if(strcmp(username, nameinput) ==0 && password == passinput){
        printf("Access Granted");
    }
    else {
        printf("Invalid Credidentials");
    }
    return 0;
}
