//write a program to check whether the user entered two numbers are equal or not

#include<stdio.h>
int main() {
    int x=0,y=0;
    printf("enter two number");
    scanf("%d%d",&x,&y);
    if(x==y)
    {
        printf("both are equal");
    }
    else{
        printf("they are not equal");
    }
    return 0;
}