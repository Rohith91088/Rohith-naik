//check whether the user entered number is multiple of 3 & 5 or not

#include<stdio.h>
int main(){
    int x=0;
    printf("enter a number\n");
    scanf("%d",&x);
    if(x%3==0 && x%5==0)
    {
        printf("the entered number %d is multiple of both 3 and 5",x);
        }
    else{
        printf("the entered number %d is not multiple of both 3 and 5",x);
    }
    return 0;
}