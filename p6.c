//to check whether the user entered number is perfect square number or not

#include<stdio.h>
#include<math.h>
int main()
{
    int num=0;
    printf("enter a number\n");
    scanf("%d",&num);
    if(num<0)
    {
        printf("the given number is not a square root (negative numbers cannot be square root)\n");
    }
    else
    {
        int sqrtNum = sqrt(num);
        if(sqrtNum * sqrtNum == num)
        {
            printf("the entered number %d is a square root",num);
        }
        else{
            printf("the entered number %d is not a square root",num);
        }
    }
    return 0;
}