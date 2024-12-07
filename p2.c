//check whether the entered number is positive or negative

#include<stdio.h>
int main() {
    int x=0;
    printf("enter a number\n");
    scanf("%d",&x);
    if(x>0)
    {
        printf("the number %d is positive",x);
    
    }
    else{
        printf("the number %d is negative",x);
    
    }
    return 0;
}
