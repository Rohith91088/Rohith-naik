//to check a person is elligible to vote or not based on their age

#include<stdio.h>
int main()
{
    int age=0;
    printf("enter your age: ");
    scanf("%d",&age);
    if(age >= 18)
    {
        printf("you are eligible to vote\n");
    }
    else{
        printf("you are not eligible to vote\n");
    }
    return 0;
}