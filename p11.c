//to check the user entered number is divisible by 5 and 10

#include<stdio.h>
int main()
{
    int x=0;
    printf("enter a number\n");
    scanf("%d",&x);
    if(x%5==0)
    {
        if(x%10==0)
        {
            printf("the entered number is divisible by both 5 and 10\n ");
        }
        else{
            printf("the entered number is divisible by 5 only");
        }
    }
    else{
        printf("the entered number is not divisible by both 5 and 10\n");
        printf("hi");
    }
    return 0;
}