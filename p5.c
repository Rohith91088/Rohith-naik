//to check whether the month number is a valid month number or invalid month number

#include<stdio.h>
int main()
{
    int num=0;
    printf("enter a number");
    scanf("%d",&num);
    if(num>=1 && num<=12)
    {
        printf("%d is valid month number",num);
    }
    else{
        printf("%d is not valid month number",num);
    }
    return 0;

}